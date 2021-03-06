#include "Form.hpp"

Form::Form(void) : _name("default name"), _sign(false), _gradeSign(75), _gradeExec(75)
{
	return ;
}

Form::Form(std::string name, unsigned int gradeSign, unsigned int gradeExec) :
_name(name), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	return ;
}

Form::Form(Form const &src) : _name(src._name), _gradeSign(src._gradeSign), _gradeExec(src._gradeExec)
{
	*this = src;

	return ;
}

Form::~Form(void)
{
	return ;
}

Form	&Form::operator=(Form const &rhs)
{
	this->_sign = rhs.getSign();
	
	return *this;
}

std::string	Form::getName(void) const
{
	return this->_name;
}

unsigned int	Form::getGradeSign(void) const
{
	return this->_gradeSign;
}

unsigned int	Form::getGradeExec(void) const
{
	return this->_gradeExec;
}

bool			Form::getSign(void) const
{
	return this->_sign;
}

void			Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > _gradeSign)
	{
		throw Form::GradeTooLowException();
		std::cout << "Form has not been correcty signed.\n";
		_sign = false;
	}
	_sign = true;
	std::cout << "Form has been correcty signed.\n";
}

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Error. Grade is too high to sign.");
}

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Error. Grade is too low to sign.");
}

const char* Form::FormNotSignedException::what() const throw()
{
	return ("Error. Form has not be signed.");
}

std::ostream    &operator<<(std::ostream &o, Form const &rhs)
{
	if (rhs.getSign() == true)
		o << rhs.getName() << ", form grade sign " << rhs.getGradeSign() << ", grade execution " << rhs.getGradeExec() << " has been correctly signed.\n";
	else
		o << rhs.getName() << ", form grade sign " << rhs.getGradeSign() << ", grade execution " << rhs.getGradeExec() << " has not been correcty signed.\n";
	
	return o;
}

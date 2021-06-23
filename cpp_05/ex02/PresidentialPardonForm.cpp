#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("PresidentialPardonForm", 25, 5)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5), _target(target)
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	*this = src;

	return ;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return ;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	_target = rhs.getTarget();

	return *this;
}


std::string	PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSign() == false)
		throw Form::FormNotSignedException();
	else if (this->getGradeExec() < executor.getGrade())
		throw Form::GradeTooLowException();
	else
		std::cout << executor.getName() << " has been forgiven by Zafod Beeblebrox.\n";

	return ;
}


/*std::ostream    &operator<<(std::ostream &o, PresidentialPardonForm const &rhs)
{
	return o;
}*/

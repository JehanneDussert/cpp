#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : Form("ShrubberyCreationForm", 145, 137)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src) : Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	*this = src;

	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	this->_target = rhs.getTarget();

	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	newF = _target + "_shrubbery";
	std::ofstream	file(newF.c_str());
	if (this->getSign() == false)
		throw Form::FormNotSignedException();
	else if (this->getGradeExec() < executor.getGrade())
		throw Form::GradeTooLowException();
	else
	{
		if (file)
		{
			file << TREES;
			file << TREE;
			std::cout << this->getName() << " has been executed, yay.\n";
		}
		else
			std::cout << "Error. Impossible to open the file.\n";
		file.close();
	}
}

std::string	ShrubberyCreationForm::getTarget(void) const
{
	return this->_target;
}

/*std::ostream    &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs)
{
	return o;
}*/

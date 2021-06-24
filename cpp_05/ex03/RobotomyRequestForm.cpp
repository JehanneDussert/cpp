#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : Form("ShrubberyCreationForm", 72, 45)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src) : Form(src.getName(), src.getGradeSign(), src.getGradeExec())
{
	*this = src;

	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("ShrubberyCreationForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    srand(time(0));

	if (this->getSign() == false)
		throw Form::FormNotSignedException();
	else if (this->getGradeExec() < executor.getGrade())
		throw Form::GradeTooLowException();
	else if (rand() % 2)
	{
		std::cout << "*drilling noises* zzzzzhhhhhhh zhhhhhh zzzhhhhhzzzz\n";
		std::cout << executor.getName() << " has been robotomized :o\n";
	}
	else
		std::cout << executor.getName() << " has not been robotomized.\n";

	return ;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	this->_target = rhs.getTarget();

	return *this;
}

std::string	RobotomyRequestForm::getTarget(void) const
{
	return this->_target;
}

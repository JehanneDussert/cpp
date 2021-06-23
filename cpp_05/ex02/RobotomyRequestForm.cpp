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
	if (this->getSign() == false)
		throw Form::FormNotSignedException();
	else if (this->getGradeExec() < executor.getGrade())
		throw Form::GradeTooLowException();
	else
	{
		std::cout << "*drilling noises* zzzzzhhhhhhh zhhhhhh zzzhhhhhzzzz\n";
		std::cout << executor << " has been robotimized in 50 :o\n";
	}

	return ;
}

// RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
// {
// 	return *this;
// }

/*std::ostream    &operator<<(std::ostream &o, RobotomyRequestForm const &rhs)
{
	return o;
}*/

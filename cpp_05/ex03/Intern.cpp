#include "Intern.hpp"

Intern::Intern(void)
{
	_tab[0] = "robotomy request";
	_tab[1] = "presidential request";
	_tab[2] = "shrubbery request";

	return ;
}

std::string	Intern::getTab(int const idx) const
{
	return this->_tab[idx];
}

Intern::Intern(Intern const &src)
{
	this->_tab[0] = src.getTab(0);
	this->_tab[1] = src.getTab(1);
	this->_tab[2] = src.getTab(2);
	*this = src;

	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern	&Intern::operator=(Intern const &rhs)
{
	(void)rhs;

	return *this;
}

Form	*newRobotomyRequest(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form	*newPresidentialRequest(std::string target)
{
	return new PresidentialPardonForm(target);
}

Form	*newShrubberyRequest(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form	*Intern::makeForm(std::string name, std::string target)
{
	Form*	(*_tab[3])(std::string);
	_tab[0] = &newRobotomyRequest;
	_tab[1] = &newPresidentialRequest;
	_tab[2] = &newShrubberyRequest;

	for (int i = 0; i < 3; i++)
	{
		if (name == this->_tab[i])
		{
			std::cout << "Intern creates " << name << ".\n";
			return _tab[i](target);
		}
	}
	std::cout << "Error. Unknown type form.\n";
	return NULL;
}

/*std::ostream    &operator<<(std::ostream &o, Intern const &rhs)
{
	return o;
}*/

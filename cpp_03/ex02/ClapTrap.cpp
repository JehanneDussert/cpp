#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "** CL4P-TP ** constructor called !\n";

	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;

	return ;
}

ClapTrap::~ClapTrap(void)
{
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, ClapTrap const &rhs)
{
	return o;
}*/

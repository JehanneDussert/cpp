#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src) : ClapTrap(src), NinjaTrap(src), FragTrap(src)
{
	*this = src;

	return ;
}

SuperTrap::SuperTrap(std::string name) : ClapTrap::ClapTrap(name)
{
	std::cout << "** SUPER-TP ** constructor called !\n";

	return ;
}

SuperTrap::~SuperTrap(void)
{
	std::cout << "** SUPER-TP ** destructor called !\n";

	return ;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs)
{
	(void)rhs;

	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, SuperTrap const &rhs)
{
	return o;
}*/

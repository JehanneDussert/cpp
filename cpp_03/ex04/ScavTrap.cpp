#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;

	return ;
}

ScavTrap::~ScavTrap(void)
{
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, ScavTrap const &rhs)
{
	return o;
}*/

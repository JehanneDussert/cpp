#include "SuperTrap.hpp"

SuperTrap::SuperTrap(void)
{
	return ;
}

SuperTrap::SuperTrap(SuperTrap const &src)
{
	*this = src;

	return ;
}

SuperTrap::~SuperTrap(void)
{
	return ;
}

SuperTrap	&SuperTrap::operator=(SuperTrap const &rhs)
{
	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, SuperTrap const &rhs)
{
	return o;
}*/

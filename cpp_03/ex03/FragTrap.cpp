#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;

	return ;
}

FragTrap::~FragTrap(void)
{
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, FragTrap const &rhs)
{
	return o;
}*/

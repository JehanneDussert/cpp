#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon::AWeapon("Power Fist", 80, 50)
{
	return ;
}

PowerFist::PowerFist(PowerFist const &src) : AWeapon(src)
{
	*this = src;

	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist	&PowerFist::operator=(PowerFist const &rhs)
{
	(void)rhs;

	return *this;
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";

	return ;
}

/*std::ostream    &operator<<(std::ostream &o, PowerFist const &rhs)
{
	return o;
}*/

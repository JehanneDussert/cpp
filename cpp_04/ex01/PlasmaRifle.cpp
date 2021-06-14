#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon::AWeapon("Plasma Rifle", 21, 5)
{
	return ;
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &src) : AWeapon(src)
{
	*this = src;

	return ;
}

PlasmaRifle::~PlasmaRifle(void)
{
	return ;
}

PlasmaRifle	&PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	(void)rhs;

	return *this;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";

	return ;
}

/*std::ostream    &operator<<(std::ostream &o, PlasmaRifle const &rhs)
{
	return o;
}*/

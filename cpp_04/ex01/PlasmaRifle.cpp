#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon::AWeapon("Plasma Rifle", 5, 21)
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
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();

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

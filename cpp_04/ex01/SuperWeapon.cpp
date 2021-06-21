#include "SuperWeapon.hpp"

SuperWeapon::SuperWeapon(void) : AWeapon::AWeapon("Super Weapon", 20, 40)
{
	return ;
}

SuperWeapon::SuperWeapon(SuperWeapon const &src) : AWeapon(src)
{
	*this = src;

	return ;
}

SuperWeapon::~SuperWeapon(void)
{
	return ;
}

SuperWeapon	&SuperWeapon::operator=(SuperWeapon const &rhs)
{
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();

	return *this;
}

void SuperWeapon::attack() const
{
	std::cout << "* glouglouglou *\n";

	return ;
}

/*std::ostream    &operator<<(std::ostream &o, SuperWeapon const &rhs)
{
	return o;
}*/

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;

	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : name(name), apcost(apcost), damage(damage)
{
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon	&AWeapon::operator=(AWeapon const &rhs)
{
	(void)rhs;

	return *this;
}

int AWeapon::getAPCost() const
{
	return this->apcost;
}

int AWeapon::getDamage() const
{
	return this->damage;
}

std::string AWeapon::getName() const
{
	return this->name;
}

/*std::ostream    &operator<<(std::ostream &o, AWeapon const &rhs)
{
	return o;
}*/

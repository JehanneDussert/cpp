#include "AWeapon.hpp"

AWeapon::AWeapon(void) : _name(NULL)
{
	return ;
}

AWeapon::AWeapon(AWeapon const &src)
{
	*this = src;

	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon	&AWeapon::operator=(AWeapon const &rhs)
{
	this->_name = rhs.getName();
	this->_apcost = rhs.getAPCost();
	this->_damage = rhs.getDamage();

	return *this;
}

int AWeapon::getAPCost() const
{
	return this->_apcost;
}

int AWeapon::getDamage() const
{
	return this->_damage;
}

std::string AWeapon::getName() const
{
	return this->_name;
}

/*std::ostream    &operator<<(std::ostream &o, AWeapon const &rhs)
{
	return o;
}*/

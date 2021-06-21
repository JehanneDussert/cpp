#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::Character(Character const &src)
{
	*this = src;

	return ;
}

Character::Character(std::string const & name) : _name(name), _w(NULL), _ap(40)
{
	return ;
}

Character::~Character(void)
{
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	this->_name = rhs.getName();
	this->_w = rhs.getWeapon();
	this->_ap = rhs.getAp();

	return *this;
}


void Character::recoverAP()
{
	this->_ap <= 30 ? this->_ap += 10 : this->_ap = 40;

	return ;
}

void Character::attack(Enemy* e)
{
	if (this->_w->getAPCost() > this->_ap) 
		std::cout << "Not enough AP to attack.\n";
	else if (this->_w)
	{
		this->_ap -= this->_w->getAPCost();
		std::cout << this->_name << " attacks " << e->getType() << " with a " << this->getWeaponName() << std::endl;
		this->_w->attack();
		e->takeDamage(this->_w->getDamage());
		if (e->getHP() <= 0)
			delete e;
	}
	return ;
}

std::string Character::getName() const
{
	return this->_name;
}

void Character::equip(AWeapon* w)
{
	this->_w = w;

	return ;
}


int	Character::getAp() const
{
	return this->_ap;
}

std::string	Character::getWeaponName() const
{
	if (!this->_w)
		return NULL;
	return this->_w->getName();
}

AWeapon*	Character::getWeapon() const
{
	return this->_w;
}

std::ostream    &operator<<(std::ostream &o, Character const &rhs)
{
	if (rhs.getWeapon())
		o << rhs.getName() << " has " << rhs.getAp() << " AP and wields a " << rhs.getWeaponName() << std::endl;
	else
		o << rhs.getName() << " has " << rhs.getAp() << " AP and is unarmed\n";
	return o;
}

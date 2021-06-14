#include "Character.hpp"

Character::Character(Character const &src)
{
	*this = src;

	return ;
}

Character::Character(std::string const & name) :_name(name), ap(40) 
{
	return ;
}

Character::~Character(void)
{
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	(void)rhs;

	return *this;
}


void Character::recoverAP()
{
	this->ap <= 30 ? this->ap += 10 : this->ap = 40;

	return ;
}

int	Character::getAPCost()
{
	return this->w->apcost;
}

void Character::attack(Enemy* e)
{
	if (this->getAPCost() > this->ap) 
		std::cout << "Not enough Action points to attack.\n";
	else if (this->w)
	{
		this->ap -= this->getAPCost();
		std::cout << this->_name << " attacks " << e->type << " with a " << this->w << std::endl;
		this->w->attack();
		e->takeDamage(this->w->getDamage());
		if (e->hp <= 0)
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
	this->w = w;

	return ;
}

std::ostream    &operator<<(std::ostream &o, Character const &rhs)
{
	if (rhs.w)
		o << rhs.getName() << " has " << rhs.ap << " and wiels a " << rhs.w << std::endl;
	else
		o << rhs.getName() << " has " << rhs.ap << " and is unarmed\n";
	return o;
}

#include "Character.hpp"

// The Character possesses an inventory of 4 Materia at most, empty at start. He’ll
// equip the Materia in slots 0 to 3, in this order.

Character::Character(void)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;

	return ;
}

Character::Character(Character const &src)
{
	*this = src;

	return ;
}

Character::~Character(void)
{
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	if (this == &rhs)
		return *this;
	return *this;
}

std::string const & Character::getName() const
{

}

// In case we try to equip a Materia in a full inventory, or use/uneqip a nonexistent
// Materia, don’t do a thing.

void Character::equip(AMateria* m)
{
	if (!m)
		return ;

}

void Character::unequip(int idx)
{
	//The unequip method must NOT delete Materia!
	if (!this->_materia[idx])
		return ;
	//this->_materia[idx]->_type = NULL;
}

void Character::use(int idx, ICharacter& target)
{

}


/*std::ostream    &operator<<(std::ostream &o, Character const &rhs)
{
	return o;
}*/

#include "Character.hpp"

Character::Character(void) : _nb(0), _materia(new AMateria*[4])
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

Character::Character(std::string name) : _nb(0), _materia(new AMateria*[4]), _name(name)
{
	for (int i = 0; i < 4; i++)
		_materia[i] = NULL;
	
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < _nb; i++)
		delete _materia[i];
	delete [] _materia;

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
	return _name;
}

void Character::equip(AMateria* m)
{
	if (!m || _nb == 4)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (!_materia[_nb])
		{
			_materia[_nb] = m;
			_nb++;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (!_materia[idx])
		return ;
	_materia[idx] = NULL;
	_nb--;
}

void Character::use(int idx, ICharacter& target)
{
	if (!_materia[idx])
		return ;
	_materia[idx]->use(target);
}


/*std::ostream    &operator<<(std::ostream &o, Character const &rhs)
{
	return o;
}*/

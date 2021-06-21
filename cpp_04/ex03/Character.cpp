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

AMateria	*Character::getMateria(int const idx) const
{
	return (_materia[idx]);
}

Character	&Character::operator=(Character const &rhs)
{
	std::cout << "enter\n";
	_name = rhs.getName();
	_nb = rhs.getCount();
	for (int i = 0; i < 4; i++)
	{
		if (_materia[i])
		{
			delete _materia[i];
			_materia[i] = NULL;
		}
		std::cout << "enter\n";
		_materia[i] = rhs.getMateria(i)->clone();
	}

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

int Character::getCount() const
{
	return _nb;
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

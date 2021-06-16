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

Character::~Character(void)
{
	return ;
}

Character	&Character::operator=(Character const &rhs)
{
	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, Character const &rhs)
{
	return o;
}*/

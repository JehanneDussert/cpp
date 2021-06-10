#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;

	return ;
}

Sorcerer::~Sorcerer(void)
{
	return ;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs)
{
	(void)rhs;

	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, Sorcerer const &rhs)
{
	return o;
}*/

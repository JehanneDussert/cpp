#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	return ;
}

Sorcerer::Sorcerer(Sorcerer const &src)
{
	*this = src;

	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{

}

void	Sorcerer::introduce(void)
{
	std::cout << "I am " << this->_name << ", " << this->_title << ", and I like ponies!\n";

	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!\n";
	return ;
}

void	Sorcerer::polymorph(Victim const &) const
{
	// polymorph people
	return ;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs)
{
	(void)rhs;

	return *this;
}

std::ostream    &operator<<(std::ostream &o, Sorcerer const &rhs)
{
	(void)rhs;

	// He can introduce himself on any output stream, thanks to an overload of the << to
	// ostream operator
	
	return o;
}

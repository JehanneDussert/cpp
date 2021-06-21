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

Sorcerer::Sorcerer(std::string name, std::string title) : name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born !\n";

	return ;
}

void	Sorcerer::introduce(void) const
{
	std::cout << "I am " << this->name << ", " << this->title << ", and I like ponies!\n";

	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!\n";
	return ;
}

void	Sorcerer::polymorph(Victim const &v) const
{
	v.getPolymorphed();

	return ;
}

Sorcerer	&Sorcerer::operator=(Sorcerer const &rhs)
{
	this->name = rhs.name;
	this->title = rhs.title;

	return *this;
}

std::ostream    &operator<<(std::ostream &o, Sorcerer const &rhs)
{
	o << "I am " << rhs.name << ", " << rhs.title << ", and I like ponies!\n";

	return o;
}

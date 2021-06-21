#include "Peon.hpp"

Peon::Peon(Peon const &src) : Victim(src)
{
	*this = src;

	return ;
}

Peon::Peon(std::string name) : Victim::Victim(name)
{
	std::cout << "Zog zog.\n";

	return ;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a pink pony!\n";

	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark...\n";

	return ;
}

Peon	&Peon::operator=(Peon const &rhs)
{
	this->name = rhs.name;

	return *this;
}

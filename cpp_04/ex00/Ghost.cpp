#include "Ghost.hpp"

Ghost::Ghost(Ghost const &src) : Victim(src)
{
	*this = src;

	return ;
}

Ghost::Ghost(std::string name) : Victim::Victim(name)
{
	std::cout << "Ghost " << this->name << " is born, bouhouuuuu.\n";

	return ;
}

void	Ghost::getPolymorphed(void) const
{
	std::cout << this->name << " has been turned into a big toad!\n";

	return ;
}

Ghost::~Ghost(void)
{
	std::cout << "Bouhouuuuuuuuuuuuu...\n";

	return ;
}

Ghost	&Ghost::operator=(Ghost const &rhs)
{
	this->name = rhs.name;

	return *this;
}


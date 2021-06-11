#include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::Victim(Victim const &src)
{
	*this = src;

	return ;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!\n";

	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apprent reason!\n";

	return ;
}

Victim	&Victim::operator=(Victim const &rhs)
{
	(void)rhs;

	return *this;
}

void	Victim::introduce(void)
{
	std::cout << "I'm " << this->_name << " and I like otters!\n";

	return ;
}

// polymorphed by the Sorcerer ?
void	Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!\n";

	return ;
}

/*std::ostream    &operator<<(std::ostream &o, Victim const &rhs)
{
	return o;
}*/
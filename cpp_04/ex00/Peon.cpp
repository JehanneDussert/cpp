#include "Peon.hpp"

Peon::Peon(void)
{
	return ;
}

Peon::Peon(Peon const &src)
{
	*this = src;

	return ;
}

Peon::Peon(std::string name) : _name(name)
{
	std::cout << "Zog zog.\n";

	return ;
}

void	Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!\n";

	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark...\n";

	return ;
}

Peon	&Peon::operator=(Peon const &rhs)
{
	(void)rhs;

	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, Peon const &rhs)
{
	return o;
}*/

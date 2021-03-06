#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const &src) : AMateria(src)
{
	*this = src;

	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice	&Ice::operator=(Ice const &rhs)
{
	this->_type = rhs.getType();
	this->_xp = rhs.getXP();

	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	AMateria::use(target);

	return ;
}

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const &src)
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
	this->_type = rhs._type;
	this->_xp = rhs._xp;

	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
	_xp += 10;
}

/*std::ostream    &operator<<(std::ostream &o, Ice const &rhs)
{
	return o;
}*/

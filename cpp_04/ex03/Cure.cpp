#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const &src) : AMateria(src)
{
	*this = src;

	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure	&Cure::operator=(Cure const &rhs)
{
	this->_type = rhs.getType();
	this->_xp = rhs.getXP();

	return *this;
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals  " << target.getName() << " wounds *\n";
	AMateria::use(target);

	return ;
}

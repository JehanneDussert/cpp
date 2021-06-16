#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const &src)
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
	return *this;
}

AMateria* Cure::clone() const
{
	
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals  " << target.getName() << " wounds *\n";
	_xp += 10;
}

/*std::ostream    &operator<<(std::ostream &o, Cure const &rhs)
{
	return o;
}*/

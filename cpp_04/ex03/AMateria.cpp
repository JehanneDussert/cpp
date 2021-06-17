#include "AMateria.hpp"

AMateria::AMateria(void) : _xp(0), _type("")
{
	return ;
}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type)
{
	return ;
}

AMateria::AMateria(AMateria const &src)
{
	*this = src;

	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria	&AMateria::operator=(AMateria const &rhs)
{
	(void)rhs;

	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
} //Returns the Materia's XP

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;

	return ;
}

/*std::ostream    &operator<<(std::ostream &o, AMateria const &rhs)
{
	return o;
}*/

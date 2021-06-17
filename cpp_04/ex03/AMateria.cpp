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
	this->_type = rhs._type;
	this->_xp = rhs._xp;

	return *this;
}

std::string const & AMateria::getType() const
{
	return _type;
}

void	AMateria::setType(std::string const type)
{
	_type = type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void	AMateria::setXP(unsigned int const xp)
{
	_xp = xp;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;

	return ;
}

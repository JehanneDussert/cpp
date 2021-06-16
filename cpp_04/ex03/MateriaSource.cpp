#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : AMateria("materias")
{
	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	*this = src;

	return ;
}

MateriaSource::~MateriaSource(void)
{
	return ;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	return *this;
}

AMateria* MateriaSource::clone() const
{
	
}

/*std::ostream    &operator<<(std::ostream &o, MateriaSource const &rhs)
{
	return o;
}*/

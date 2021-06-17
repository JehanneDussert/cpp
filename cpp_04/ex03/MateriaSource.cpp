#include "MateriaSource.hpp"

// In a nutshell, your Source must be able to learn "templates" of Materia, and re-create
// them on demand. You’ll then be able to create a Materia without knowing it "real" type,
// just a string identifying it.

MateriaSource::MateriaSource(void) : _src(new AMateria*[4]), _n(0)
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
	this->_n = rhs._n;
	this->_src = rhs._src;

	return *this;
}

void MateriaSource::learnMateria(AMateria* src)
{
	if (src && _n < 4)
		_src[_n] = src;
	_n++;
}

AMateria*  MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
		if (_src[i] && _src[i]->getType() == type)
			return _src[i]->clone();
	return 0;
}


/*std::ostream    &operator<<(std::ostream &o, MateriaSource const &rhs)
{
	return o;
}*/

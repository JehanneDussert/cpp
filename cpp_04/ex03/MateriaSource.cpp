#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _src(new AMateria*[4]), _n(0)
{
	for (int i = 0; i < 4; i++)
		_src[i] = NULL;

	return ;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
	for (int i = 0; i < 4; i++)
		_src[i] = src.getMateria(i);

	return ;
}

AMateria* MateriaSource::getMateria(int const idx) const
{
	return _src[idx];
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		delete _src[i];
	delete [] _src;

	return ;
}

int	MateriaSource::getCount() const
{
	return _n;
}

MateriaSource	&MateriaSource::operator=(MateriaSource const &rhs)
{
	_n = rhs.getCount();

	for (int i = 0; i < 4; i++)
	{
		if (_src[i])
		{
			delete _src[i];
			_src[i] = NULL;
		}
		_src[i] = rhs.getMateria(i)->clone();
	}

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

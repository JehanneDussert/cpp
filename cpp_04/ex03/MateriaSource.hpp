#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	private:
		AMateria		**_src;
		unsigned int	_n;
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		~MateriaSource(void);
		MateriaSource &operator=(MateriaSource const &rhs);
		virtual void learnMateria(AMateria*);
		virtual AMateria* createMateria(std::string const & type);
};

//std::ostream    &operator<<(std::ostream &o, MateriaSource const &rhs);

#endif

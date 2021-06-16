#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>

# include "AMateria.hpp"

class	MateriaSource : public AMateria
{
	private:
	public:
		MateriaSource(void);
		MateriaSource(MateriaSource const &src);
		~MateriaSource(void);
		MateriaSource &operator=(MateriaSource const &rhs);
		virtual AMateria* clone() const;
};

//std::ostream    &operator<<(std::ostream &o, MateriaSource const &rhs);

#endif

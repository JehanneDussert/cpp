#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "AMateria.hpp"
# include "MateriaSource.hpp"
# include "ICharacter.hpp"

class	Character : public AMateria
{
	private:
		AMateria	*_materia[4];
	public:
		Character(void);
		Character(Character const &src);
		~Character(void);
		Character &operator=(Character const &rhs);
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};

//std::ostream    &operator<<(std::ostream &o, Character const &rhs);

#endif

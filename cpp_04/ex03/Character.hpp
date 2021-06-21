#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "AMateria.hpp"
# include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		int				_nb;
		AMateria		**_materia;
		std::string		_name;
		Character(void);
	public:
		Character(std::string name);
		Character(Character const &src);
		~Character(void);
		Character &operator=(Character const &rhs);
		virtual std::string const & getName() const;
		int	getCount() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
		AMateria	*getMateria(int const idx) const;
};

#endif

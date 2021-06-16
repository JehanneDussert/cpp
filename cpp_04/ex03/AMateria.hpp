#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

# include "ICharacter.hpp"

class AMateria
{
	private:
	protected:
		//[...]
		AMateria(void);
		unsigned int _xp;
		std::string _type;
	public:
		AMateria(std::string const & type);
		//[...]
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

//std::ostream    &operator<<(std::ostream &o, AMateria const &rhs);

#endif

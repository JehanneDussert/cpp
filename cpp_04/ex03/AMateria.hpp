#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <iostream>

# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	private:
	protected:
		AMateria(void);
		unsigned int	_xp;
		std::string		_type;
	public:
		AMateria(std::string const & type);
		AMateria(AMateria const &src);
		AMateria &operator=(AMateria const &rhs);
		virtual ~AMateria();
		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		void setType(std::string const type);
		void setXP(unsigned int const xp);
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif

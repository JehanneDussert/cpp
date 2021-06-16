#ifndef ICE_HPP
# define ICE_HPP

# include <iostream>

# include "AMateria.hpp"

class	Ice : public AMateria
{
	private:
	public:
		Ice(void);
		Ice(Ice const &src);
		~Ice(void);
		Ice &operator=(Ice const &rhs);
		virtual AMateria* clone() const;
		virtual void use(ICharacter& target);
};

//std::ostream    &operator<<(std::ostream &o, Ice const &rhs);

#endif

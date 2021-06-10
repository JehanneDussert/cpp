#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "NinjaTrap.hpp"

class	SuperTrap : public NinjaTrap, public FragTrap 
{
	private:
	public:
		SuperTrap(void);
		SuperTrap(SuperTrap const &src);
		SuperTrap(std::string name);
		~SuperTrap(void);
		SuperTrap &operator=(SuperTrap const &rhs);
		using FragTrap::rangedAttack;
		using NinjaTrap::meleeAttack;
};

//std::ostream    &operator<<(std::ostream &o, SuperTrap const &rhs);

#endif

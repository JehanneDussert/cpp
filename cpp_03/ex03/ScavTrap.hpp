#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <cmath>

class	ScavTrap
{
	private:
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, ScavTrap const &rhs);

#endif

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cmath>

# include "ClapTrap.hpp"

class	FragTrap : virtual public ClapTrap
{
	private:
	public:
		FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap(std::string name);
		~FragTrap(void);
		FragTrap &operator=(FragTrap const &rhs);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	vaulthunter_dot_exe(std::string const & target);
};

//std::ostream    &operator<<(std::ostream &o, FragTrap const &rhs);

#endif

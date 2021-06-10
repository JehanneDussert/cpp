#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class	NinjaTrap : virtual public ClapTrap
{
	private:
	public:
		NinjaTrap(void);
		NinjaTrap(NinjaTrap const &src);
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	ninjaShoebox(NinjaTrap const & target);
		void	ninjaShoebox(ClapTrap const & target);
		void	ninjaShoebox(ScavTrap const & target);
		void	ninjaShoebox(FragTrap const & target);
		NinjaTrap &operator=(NinjaTrap const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, NinjaTrap const &rhs);

#endif

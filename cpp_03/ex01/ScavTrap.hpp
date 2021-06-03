#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include <cmath>

class	ScavTrap
{
	private:
		unsigned int	_hit;
		unsigned int	_max_hit;
		unsigned int	_energy;
		unsigned int	_max_energy;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee;
		unsigned int	_ranged;
		unsigned int	_armor;
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		ScavTrap(std::string name);
		~ScavTrap(void);
		ScavTrap &operator=(ScavTrap const &rhs);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	challengeNewcomer(std::string const & target);
};

//std::ostream    &operator<<(std::ostream &o, ScavTrap const &rhs);

#endif

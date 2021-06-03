#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cmath>

class	FragTrap
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

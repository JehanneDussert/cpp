#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>

class	NinjaTrap
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
		NinjaTrap(void);
		NinjaTrap(NinjaTrap const &src);
		NinjaTrap(std::string name);
		~NinjaTrap(void);
		void	rangedAttack(std::string const & target);
		void	meleeAttack(std::string const & target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		NinjaTrap &operator=(NinjaTrap const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, NinjaTrap const &rhs);

#endif

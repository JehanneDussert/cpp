#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>

class	ClapTrap
{
	protected:
		void			rangedAttack(std::string const & target);
		void			meleeAttack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
	private:
	public:
		unsigned int	_hit;
		unsigned int	_max_hit;
		unsigned int	_energy;
		unsigned int	_max_energy;
		unsigned int	_level;
		std::string		_name;
		unsigned int	_melee;
		unsigned int	_ranged;
		unsigned int	_armor;
		ClapTrap(void);
		ClapTrap(ClapTrap const &src);
		ClapTrap(std::string name);
		ClapTrap(int hit, int max_hit, int energy, int max_energy, int level, std::string name, int melee, int ranged, int armor);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, ClapTrap const &rhs);

#endif

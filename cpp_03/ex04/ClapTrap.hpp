#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>

class	ClapTrap
{
	private:
	public:
		ClapTrap(void);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, ClapTrap const &rhs);

#endif

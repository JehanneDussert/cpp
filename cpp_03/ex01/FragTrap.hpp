#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <cmath>

class	FragTrap
{
	private:
	public:
		FragTrap(void);
		FragTrap(FragTrap const &src);
		~FragTrap(void);
		FragTrap &operator=(FragTrap const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, FragTrap const &rhs);

#endif

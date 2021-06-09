#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>

class	SuperTrap
{
	private:
	public:
		SuperTrap(void);
		SuperTrap(SuperTrap const &src);
		~SuperTrap(void);
		SuperTrap &operator=(SuperTrap const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, SuperTrap const &rhs);

#endif

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <cmath>

class	NinjaTrap
{
	private:
	public:
		NinjaTrap(void);
		NinjaTrap(NinjaTrap const &src);
		~NinjaTrap(void);
		NinjaTrap &operator=(NinjaTrap const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, NinjaTrap const &rhs);

#endif

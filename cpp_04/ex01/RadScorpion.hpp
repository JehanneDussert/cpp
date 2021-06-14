#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include <iostream>

# include "Enemy.hpp"

class	RadScorpion : public Enemy
{
	private:
	public:
		RadScorpion(void);
		RadScorpion(RadScorpion const &src);
		~RadScorpion(void);
		RadScorpion &operator=(RadScorpion const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, RadScorpion const &rhs);

#endif

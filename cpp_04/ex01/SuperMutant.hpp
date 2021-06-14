#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include <iostream>

# include "Enemy.hpp"

class	SuperMutant : public Enemy
{
	private:
	public:
		SuperMutant(void);
		SuperMutant(SuperMutant const &src);
		~SuperMutant(void);
		SuperMutant &operator=(SuperMutant const &rhs);
		virtual void takeDamage(int);
};

//std::ostream    &operator<<(std::ostream &o, SuperMutant const &rhs);

#endif

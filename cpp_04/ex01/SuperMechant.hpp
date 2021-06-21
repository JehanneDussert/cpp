#ifndef SUPERMECHANT_HPP
# define SUPERMECHANT_HPP

# include <iostream>

# include "Enemy.hpp"

class	SuperMechant : public Enemy
{
	private:
	public:
		SuperMechant(void);
		SuperMechant(SuperMechant const &src);
		~SuperMechant(void);
		SuperMechant &operator=(SuperMechant const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, SuperMechant const &rhs);

#endif

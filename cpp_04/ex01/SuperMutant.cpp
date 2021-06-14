#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!\n";

	return ;
}

SuperMutant::SuperMutant(SuperMutant const &src) : Enemy(src)
{
	*this = src;

	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh...\n";

	return ;
}

SuperMutant	&SuperMutant::operator=(SuperMutant const &rhs)
{
	(void)rhs;

	return *this;
}

void SuperMutant::takeDamage(int n)
{
	Enemy::takeDamage(n - 3);

	return ;
}

/*std::ostream    &operator<<(std::ostream &o, SuperMutant const &rhs)
{
	return o;
}*/

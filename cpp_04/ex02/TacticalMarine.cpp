#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for battle!\n";

	return ;
}

TacticalMarine::TacticalMarine(TacticalMarine const &src)
{
	*this = src;

	return ;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh...\n";

	return ;
}

TacticalMarine	&TacticalMarine::operator=(TacticalMarine const &rhs)
{
	(void)rhs;

	return *this;
}

ISpaceMarine* TacticalMarine::clone() const
{
	return new TacticalMarine(*this);
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!\n";

	return ;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";

	return ;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";

	return ;
}

/*std::ostream    &operator<<(std::ostream &o, TacticalMarine const &rhs)
{
	return o;
}*/

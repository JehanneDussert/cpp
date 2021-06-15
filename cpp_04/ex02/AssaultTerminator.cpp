#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << "* teleports from space *\n";

	return ;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &src)
{
	*this = src;

	return ;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << "I’ll be back...\n";

	return ;
}

AssaultTerminator	&AssaultTerminator::operator=(AssaultTerminator const &rhs)
{
	(void)rhs;

	return *this;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!\n";

	return ;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";

	return ;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";

	return ;
}

/*std::ostream    &operator<<(std::ostream &o, AssaultTerminator const &rhs)
{
	return o;
}*/

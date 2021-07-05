#include "Mutantstack.hpp"

Mutantstack::Mutantstack(void)
{
	return ;
}

Mutantstack::Mutantstack(Mutantstack const &src)
{
	*this = src;

	return ;
}

Mutantstack::~Mutantstack(void)
{
	return ;
}

Mutantstack	&Mutantstack::operator=(Mutantstack const &rhs)
{
	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, Mutantstack const &rhs)
{
	return o;
}*/

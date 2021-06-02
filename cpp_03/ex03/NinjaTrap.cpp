#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;

	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	return ;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs)
{
	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, NinjaTrap const &rhs)
{
	return o;
}*/

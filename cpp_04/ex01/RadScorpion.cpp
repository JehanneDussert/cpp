#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";

	return ;
}

RadScorpion::RadScorpion(RadScorpion const &src) : Enemy(src)
{
	*this = src;

	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *\n";

	return ;
}

RadScorpion	&RadScorpion::operator=(RadScorpion const &rhs)
{
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();

	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, RadScorpion const &rhs)
{
	return o;
}*/

#include "SuperMechant.hpp"

SuperMechant::SuperMechant(void) : Enemy(80, "Super Mechant")
{
	std::cout << "* bim bam boum *\n";

	return ;
}

SuperMechant::SuperMechant(SuperMechant const &src) : Enemy(src)
{
	*this = src;

	return ;
}

SuperMechant::~SuperMechant(void)
{
	std::cout << "* PLOUF *\n";

	return ;
}

SuperMechant	&SuperMechant::operator=(SuperMechant const &rhs)
{
	this->_hp = rhs.getHP();
	this->_type = rhs.getType();

	return *this;
}

/*std::ostream    &operator<<(std::ostream &o, SuperMechant const &rhs)
{
	return o;
}*/

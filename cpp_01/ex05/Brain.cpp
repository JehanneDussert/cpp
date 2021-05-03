#include "Brain.hpp"

std::string    Brain::identify(void) const
{
    std::string 		addr;
	std::ostringstream	res;
	res << this;
	addr = res.str();
	
	return addr;
}

Brain::Brain(void)
{
    return ;
}

Brain::~Brain(void)
{
    return ;
}

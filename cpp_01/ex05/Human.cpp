#include "Human.hpp"

Human::Human(void)
{
    return ;
}

Human::~Human(void)
{
    return ;
}

std::string    Human::identify(void) const
{
    return this->brain.identify();
}

const Brain		&Human::getBrain(void)
{
	return this->brain;
}

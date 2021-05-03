#include "ZombieHorde.hpp"

Zombie::Zombie(void)
{
    std::cout << "\033[1;33m*\033[0m \033[1;32mBraaaaa ! A new Zombie is born !\033[0m \033[1;33m*\033[0m\n";
    return ;
};

Zombie::~Zombie(void)
{
    return ;
};

void    Zombie::announce(void)
{
    std::cout << "< " << this->name << " (" << this->type << ") >" << " Braiiiiiiinnnssss ...\n";
}

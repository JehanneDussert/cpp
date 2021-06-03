#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    FragTrap bot1("Xavier");
    bot1.takeDamage(20);
    bot1.beRepaired(100);
    bot1.rangedAttack("Sophie");
    bot1.meleeAttack("Nicolas");
    bot1.vaulthunter_dot_exe("Delphine");

    std::cout << std::endl;
    ScavTrap bot2("Lulu");

    return 0;
}
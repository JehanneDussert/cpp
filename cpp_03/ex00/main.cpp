#include "FragTrap.hpp"

int main(void)
{
    FragTrap bot("Xavier");
    bot.takeDamage(20);
    bot.beRepaired(100);
    bot.rangedAttack("Sophie");
    bot.meleeAttack("Nicolas");
    bot.vaulthunter_dot_exe("Delphine");

    return 0;
}
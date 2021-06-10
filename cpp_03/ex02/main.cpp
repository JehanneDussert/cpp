#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    FragTrap bot1("Zoe");
    ScavTrap bot2("Eliot");

    bot1.rangedAttack("Bob");
	bot1.takeDamage(80);
	bot1.meleeAttack("Yolanda");
	bot1.beRepaired(90);
	bot1.vaulthunter_dot_exe("Norminet");

	bot2.rangedAttack("Bob");
	bot2.takeDamage(80);
	bot2.meleeAttack("Yolanda");
	bot2.beRepaired(90);
	std::cout << "Norminet surgit pour attaquer\n";
	bot2.challengeNewcomer("Norminet");

    return 0;
}
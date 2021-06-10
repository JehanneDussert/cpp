#include "ScavTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	SuperTrap	t("Zizou");
	NinjaTrap	target1("Bobo");
	FragTrap	target2("Titi");
	ClapTrap	target3("Roméo");
	ScavTrap	target4("Victime");


	t.rangedAttack("Lili");
	t.meleeAttack("Léo");
	t.vaulthunter_dot_exe("Soso");
	t.ninjaShoebox(target1);
	t.ninjaShoebox(target2);
	t.ninjaShoebox(target3);
	t.ninjaShoebox(target4);
    return 0;
}
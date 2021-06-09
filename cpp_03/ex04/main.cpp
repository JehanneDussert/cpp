#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    ScavTrap	t1("Alex");
	ClapTrap	t2("Val");
	FragTrap	t3("Red1");
	NinjaTrap	t4("Lulu");
	NinjaTrap	t5("Lala");

	t4.ninjaShoebox(t1);
	t4.ninjaShoebox(t2);
	t4.ninjaShoebox(t3);
	t4.ninjaShoebox(t5);

    return 0;
}
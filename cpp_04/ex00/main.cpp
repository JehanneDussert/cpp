#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Ghost.hpp"

int main(void)
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Ghost bob("Bobby");

    std::cout << robert << jim << joe << bob;
    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(bob);

    std::cout << std::endl;
    Ghost lili("Lili");
    lili.introduce();
    lili = bob;
    lili.introduce();

    std::cout << std::endl;
    Victim victor("Victor");
    victor.introduce();
    victor = jim;
    victor.introduce();

    std::cout << std::endl;
    Peon titi("Titi");
    titi.introduce();
    titi = joe;
    titi.introduce();

    std::cout << std::endl;
    Sorcerer voldemort("Voldemort", "the Sorcerer");
    voldemort.introduce();
    voldemort = robert;
    voldemort.introduce();

    std::cout << std::endl;
    return 0;
}

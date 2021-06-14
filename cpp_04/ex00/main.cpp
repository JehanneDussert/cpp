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

    return 0;
}

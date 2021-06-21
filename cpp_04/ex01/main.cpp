#include "AWeapon.hpp"
#include "Character.hpp"
#include "Enemy.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "SuperMechant.hpp"
#include "SuperWeapon.hpp"

int main(void)
{
    Character* me = new Character("me");
    std::cout << *me;
    Enemy* b = new RadScorpion();
    AWeapon* pr = new PlasmaRifle();
    AWeapon* pf = new PowerFist();
    Enemy* c = new SuperMechant();
    AWeapon* wp = new SuperWeapon();
    
    me->equip(pr);
    std::cout << *me;
    me->equip(pf);
    me->attack(b);
    std::cout << *me;
    me->equip(pr);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->attack(b);
    std::cout << *me;
    me->equip(wp);
    me->attack(c);


    Character* you = new Character("you");
    std::cout << *you;
    *you = *me;
    std::cout << *you;

    delete me;
    delete pr;
    delete pf;
    delete you;
    delete wp;

    return 0;
}
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

    std::cout << "\n\n-- Attack new Enemy--\n\n";
    me->attack(c);


    std::cout << "\n-- New Character --\n\n";
    Character* you = new Character("you");
    std::cout << *me;
    std::cout << *you;
    std::cout << "\n-- You become me --\n";
    *you = *me;
    std::cout << *me;
    std::cout << *you;
    delete you;

    std::cout << "\n-- Character recover --\n\n";
    me->recoverAP();
    me->recoverAP();
    std::cout << *me;
    me->attack(c);

    delete me;
    delete pr;
    delete pf;
    delete wp;

    return 0;
}
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"

int main(void)
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());

    ICharacter* me = new Character("me");

    AMateria* tmp;
    AMateria* tmp1;
    AMateria* bidule;
    AMateria* tmp2;
    AMateria* copy;

    tmp = src->createMateria("ice");
    copy = tmp;
    me->equip(tmp);
    tmp1 = src->createMateria("cure");
    me->equip(tmp1);
    bidule = src->createMateria("bidule");

    ICharacter* bob = new Character("bob");
    ICharacter* copychar = new Character("copy char");

    std::cout << "\n--Try to equip my character & use an unknown type--\n\n";
    me->equip(bidule);
    std::cout << "Unknown type : ";
    me->use(2, *bob);
    std::cout << std::endl;

    std::cout << "\n--Try to equip & make my character use an existed type--\n\n";
    tmp2 = src->createMateria("cure");
    me->equip(tmp2);
    std::cout << "Known type : ";
    me->use(2, *bob);
    std::cout << std::endl;

    std::cout << "\n--Earn XP--\n\n";
    std::cout << "Ice xp : " << tmp->getXP() << std::endl;
    me->use(0, *bob);
    std::cout << "Ice xp : " << tmp->getXP() << std::endl;
    me->use(0, *bob);
    std::cout << "Ice xp : " << tmp->getXP() << std::endl;
    std::cout << std::endl;

    std::cout << "\n--Check copy of ice--\n\n";
    std::cout << "Copy xp : " << copy->getXP() << " | Ice xp : " << tmp->getXP() << std::endl;
    std::cout << "Copy type : " << copy->getType() << " | Ice type : " << tmp->getType() << std::endl;
    std::cout << std::endl;

    std::cout << "Cure xp : " << tmp1->getXP() << std::endl;
    me->use(1, *bob);
    std::cout << "Cure xp : " << tmp1->getXP() << std::endl;
    me->use(1, *bob);
    std::cout << "Cure xp : " << tmp1->getXP() << std::endl;
    me->use(1, *bob);
    std::cout << "Cure xp : " << tmp1->getXP() << std::endl;
    me->use(1, *bob);
    std::cout << "Cure xp : " << tmp1->getXP() << std::endl;
    std::cout << std::endl;

    me->unequip(0);
    me->equip(tmp1);
    copychar = bob;

    std::cout << "Use deleted ice : ";
    me->use(0, *bob);
    std::cout << "Copy char : ";
    me->use(0, *copychar);
    std::cout << std::endl;

    std::cout << "Use cure : ";
    me->use(1, *bob);
    std::cout << "Copy char : ";
    me->use(1, *copychar);
    std::cout << std::endl;

    std::cout << "Character name : ";
    std::cout << bob->getName() << std::endl;
    std::cout << "Copy name : ";
    std::cout << copychar->getName() << std::endl;
    
    delete bob;
    delete me;
    delete src;

    return 0;
}

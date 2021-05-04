/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:37:19 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:37:23 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    std::srand(time(0));
    std::string type[] = {
		"angry", "tired", "slow", "fast", "intrigued", "excited", 
        "screaming", "happy", "kind", "in love", "ugly"
	};
    std::string name[] = {
		"Robert", "Patrick", "Georges", "Billie", "Henriette",
		"Ginette", "Kevin", "Brian", "Nabilla", "Bob", "Cristina",
		"Paloma", "Gertrude", "Leodia"
	};

    std::cout << "\n\nZombies are coming...\n\n";
    Zombie      z1(name[std::rand() % 14], type[std::rand() % 11]);
    Zombie      z2(name[std::rand() % 14], type[std::rand() % 11]);
    Zombie      *z3;
    Zombie      *z4;
    ZombieEvent event1;
    ZombieEvent event2;
    ZombieEvent event3;
    ZombieEvent event4;

    z1.announce();
    z2.announce();
    std::cout << "\n\nMore zombies...\n\n";
    event3.setZombieType("cheerful");
    event4.setZombieType("raging");
    z3 = event3.newZombie("Lili");
    z4 = event4.newZombie("Lulu");
    z3->announce();
    z4->announce();
    std::cout << "\n\nPlease nooooo...\n\n";
    event1.setZombieType(type[std::rand() % 11]);
    event1.randomChump();
    event2.setZombieType(type[std::rand() % 11]);
    event2.randomChump();

    std::cout << "\033[1;31mSay goodbye to " << z3->name << "\033[0m\n";
    delete z3;
    std::cout << "\033[1;31mSay goodbye to " << z4->name << "\033[0m\n";
    delete z4;    
    std::cout << "\033[1;31mSay goodbye to " << z1.name << "\033[0m\n";
    std::cout << "\033[1;31mSay goodbye to " << z2.name << "\033[0m\n";
    return 0;
}

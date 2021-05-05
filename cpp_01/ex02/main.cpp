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
    ZombieEvent event1;

    z1.announce();
    z2.announce();

    std::cout << "\n\nMore zombies...\n\n";

    event1.setZombieType("cheerful");
    z3 = event1.newZombie("Lili");
    z3->announce();
    delete z3;

    std::cout << "\n\nPlease nooooo...\n\n";
    event1.setZombieType(type[std::rand() % 11]);
    event1.randomChump();
    event1.setZombieType(type[std::rand() % 11]);
    event1.randomChump();
    event1.setZombieType(type[std::rand() % 11]);
    event1.randomChump();
    event1.setZombieType(type[std::rand() % 11]);
    event1.randomChump();
    return 0;
}

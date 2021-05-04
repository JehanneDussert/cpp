/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:38:04 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:38:06 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
# include "ZombieEvent.hpp"

void	ZombieEvent::setZombieType(std::string type)
{
	this->type = type;
}

Zombie	*ZombieEvent::newZombie(std::string name)
{
	Zombie*	newZombie = new Zombie(name, this->type);

	return (newZombie);
}

void	ZombieEvent::randomChump(void)
{
	std::string random[] = {
		"Robert", "Patrick", "Georges", "Billie", "Henriette",
		"Ginette", "Kevin", "Brian", "Nabilla", "Bob", "Cristina",
		"Paloma", "Gertrude", "Leodia"
	};
    Zombie *z = newZombie(random[std::rand() % 14]);
	z->announce();
	std::cout << "\033[1;31mSay goodbye to " << z->name << "\033[0m\n";
}

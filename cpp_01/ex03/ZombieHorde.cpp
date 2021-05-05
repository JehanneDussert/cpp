/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:39:02 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:39:03 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ZombieHorde.hpp"

void		ZombieHorde::announce(Zombie *z)
{
    int i;

    for (i = 0; i < this->n; i++)
        z[i].announce();
}

ZombieHorde::ZombieHorde(int n) : n(n)
{
    int i;
    std::srand(time(0));
    std::string name[] = {
		"Robert", "Patrick", "Georges", "Billie", "Henriette",
		"Ginette", "Kevin", "Brian", "Nabilla", "Bob", "Cristina",
		"Paloma", "Gertrude", "Leodia"
	};
    std::string type[] = {
		"angry", "tired", "slow", "fast", "intrigued", "excited", 
        "screaming", "happy", "kind", "in love", "ugly"
	};

    this->z = new Zombie[n];
    for (i = 0; i < n; i++)
    {
        this->z[i].name = name[std::rand() % 14];
        this->z[i].type = type[std::rand() % 11];
    }
    this->announce(this->z);
    
    return ;
}

ZombieHorde::~ZombieHorde(void)
{
    int i;

    for (i = 0; i < n; i++)
        std::cout << "\033[1;31mSay goodbye to " << this->z[i].name << "\033[0m\n";
    delete [] this->z;
    return ;
}

void	ZombieHorde::setZombieType(std::string type)
{
	this->type = type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:37:36 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:37:37 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie(std::string name, std::string type) : name(name), type(type)
{
	std::cout << "\033[1;33m*\033[0m \033[1;32mBraaaaa ! A new Zombie called \033[1;33m" << name << "\033[0m \033[1;32mis born !\033[0m \033[1;33m*\033[0m\n";
};

Zombie::~Zombie(void)
{
    return ;
};

void    Zombie::announce(void)
{
    std::cout << "< " << this->name << " (" << this->type << ") >" << " Braiiiiiiinnnssss ...\n";
}

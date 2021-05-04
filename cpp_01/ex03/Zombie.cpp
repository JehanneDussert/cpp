/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:38:40 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:38:41 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

Zombie::Zombie(void)
{
    std::cout << "\033[1;33m*\033[0m \033[1;32mBraaaaa ! A new Zombie is born !\033[0m \033[1;33m*\033[0m\n";
    return ;
};

Zombie::~Zombie(void)
{
    return ;
};

void    Zombie::announce(void)
{
    std::cout << "< " << this->name << " (" << this->type << ") >" << " Braiiiiiiinnnssss ...\n";
}

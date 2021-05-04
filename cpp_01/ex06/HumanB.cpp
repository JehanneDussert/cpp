/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:41:07 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:41:09 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;

    return ;
}

HumanB::HumanB(std::string name) : _name(name)
{
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;

    return ;
}

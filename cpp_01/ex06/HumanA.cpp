/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:40:48 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:40:50 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _weapon(weapon), _name(name)
{
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void    HumanA::attack(void)
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;

    return ;
}

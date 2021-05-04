/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:41:19 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:41:20 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type)
{
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

std::string const & Weapon::getType(void)
{
    return this->_type;
}

void    Weapon::setType(std::string type)
{
    this->_type = type;

    return ;
}

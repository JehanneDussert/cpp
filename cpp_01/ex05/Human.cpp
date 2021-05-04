/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:40:13 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:40:14 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human(void)
{
    return ;
}

Human::~Human(void)
{
    return ;
}

std::string    Human::identify(void) const
{
    return this->brain.identify();
}

const Brain		&Human::getBrain(void)
{
	return this->brain;
}

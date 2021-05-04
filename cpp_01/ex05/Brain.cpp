/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:39:53 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:39:55 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string    Brain::identify(void) const
{
    std::string 		addr;
	std::ostringstream	res;
	res << this;
	addr = res.str();
	
	return addr;
}

Brain::Brain(void)
{
    return ;
}

Brain::~Brain(void)
{
    return ;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:20:14 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/03 11:20:15 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	memoryLeak(void)
{
    std::string*	panthere = new std::string("String panthere");
    std::cout << *panthere << std::endl;
	delete panthere;
}

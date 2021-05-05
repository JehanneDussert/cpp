/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:14:03 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/03 11:14:07 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	Pony::ft_fill(void)
{
	std::cout << "I need some informations about " << "\033[1;33m" << this->_name << "\033[0m" << " !\n";
	std::cout << "How old is it ? ";
	getline(std::cin, this->_age);
	std::cout << "Does it gallop fast or slow? ";
	getline(std::cin, this->_characteristic);
	std::cout << "Does it have a long mane or a short one? ";
	getline(std::cin, this->_mane);
	std::cout << "\033[1;33m*\033[0m \033[1;32mYour pony is ready !\033[0m \033[1;33m*\033[0m\n";
}

void	ponyOnTheStack(void)
{
	Pony	pony; // Stack

	pony.ft_fill();
	if (!pony._characteristic.compare("fast")){
		std::cout << pony._name << " gallops with its " << pony._mane << " mane in the wind ! Incredible, it jumps the obstales without difficulty !!\n";
		std::cout << "Bravo " << pony._name << " !!!\n";
	}
	else
	{
		std::cout << pony._name << " starts off well, but soon gets left behind by the other ponies :( ";
		if (!pony._mane.compare("long"))
			std::cout << "Oh no, little pony! His long mane blocks his view and he runs into the bushes !\n";
		std::cout << "Poor " << pony._name << "...\n";
	}
	return ;
}

void	ponyOnTheHeap(void)
{
	Pony*	pony = new Pony; // Heap

	pony->ft_fill();
	if (!pony->_characteristic.compare("fast"))
	{
		std::cout << pony->_name << " gallops with its " << pony->_mane << " mane in the wind ! Incredible, it jumps the obstales without difficulty !!\n";
		std::cout << "Bravo " << pony->_name << " !!!\n";
	}
	else
	{
		std::cout << pony->_name << " starts off well, but soon gets left behind by the other ponies :( ";
		if (!pony->_mane.compare("long"))
			std::cout << "Oh no, little pony! His long mane blocks his view and he runs into the bushes ! ";
		std::cout << "Poor " << pony->_name << "...\n";
	}
	delete pony;

	return ;
}

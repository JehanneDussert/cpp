/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:14:26 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/03 11:14:28 by jehannedu        ###   ########.fr       */
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

void	Pony::print_winner(Pony &first, Pony* second)
{
	if (this->_first_result == 1 && this->_second_result == 1)
		std::cout << "\n\033[1;32mPonies are tied !!!\033[0m\n\n";
	else if (this->_first_result == 1)
		std::cout << "\n\033[1;32m" << first._name << " won the race !!!\033[0m\n\n";
	else
		std::cout << "\n\033[1;32m" << second->_name << " won the race !!!\033[0m\n\n";
	return;
}

int main(void)
{
	Pony	first; // Stack
	Pony*	second = new Pony; // Heap

	first.ft_fill();
	second->ft_fill();
	first.ponyOnTheStack(first);
	second->ponyOnTheHeap(second);
	first.print_winner(first, second);

	delete second; // second is destroyed
	return 0; // first is destroyed
}

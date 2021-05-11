/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:39:21 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:39:22 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int main(void)
{
    int n = 30;
    std::cout << "\n\nA horde of " << n << " hungry zombies is heading our way!\n\n";

    ZombieHorde z(n);
    return 0;
}

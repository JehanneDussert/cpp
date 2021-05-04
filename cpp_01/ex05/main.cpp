/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:40:29 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:40:31 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int main(void)
{
    Human   bob;
    std::cout << "Brain address : ";
    std::cout << bob.identify() << std::endl;
    std::cout << "Human address : ";
    std::cout << bob.getBrain().identify() << std::endl;
}

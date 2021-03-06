/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:21:51 by jdussert          #+#    #+#             */
/*   Updated: 2021/06/21 14:05:38 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"

int main(void)
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    std::cout << "\n-- New squad --\n\n";
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }
    std::cout << "\n-- New squad --\n\n";
    Squad* s = new Squad;

    for (int i = 0; i < s->getCount(); ++i)
    {
        ISpaceMarine* cur = s->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << "\n-- Clone ISpaceMarine --\n\n";
    ISpaceMarine* lolo = jim->clone();
    s->push(lolo);
    Squad* sq = new Squad;
    *sq = *s;
    std::cout << "Number of units currently in the squad : " << sq->getCount() << std::endl;
    std::cout << "Pointer to the 0th unit : " << sq->getUnit(0) << std::endl;
    std::cout << "Number of units currently in the squad : " << sq->getCount() << std::endl;
    std::cout << "Pointer to the 0th unit : " << sq->getUnit(0) << std::endl;
    
    std::cout << std::endl;
    delete vlc;
    delete s;
    delete sq;

    return 0;
}
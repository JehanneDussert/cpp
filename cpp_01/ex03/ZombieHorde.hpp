/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:39:10 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:39:11 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <cstdlib>
# include <iostream>
# include <ctime>
# include "Zombie.hpp"

class ZombieHorde
{
    private:
    public:
        int n;
        Zombie *z;
        ZombieHorde(int n);
        ZombieHorde(void);
        ~ZombieHorde(void);
        std::string	type;
		void		setZombieType(std::string type);
		void		announce(Zombie *z);
};

#endif

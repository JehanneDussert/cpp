/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:38:18 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:38:19 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <cstdlib>
# include <iostream>
# include <ctime>

class	ZombieEvent
{
	public:
		std::string	type;
		void		setZombieType(std::string type);
		Zombie		*newZombie(std::string name);
		void		randomChump(void);
};

#endif

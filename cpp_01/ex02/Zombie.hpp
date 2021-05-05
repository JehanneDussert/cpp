/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:37:50 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:37:51 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <cstdlib>
# include <iostream>
# include <ctime>

class	Zombie
{
	public:
		std::string	name;
		std::string	type;
		Zombie(std::string name, std::string type);
		~Zombie(void)
		{
			std::cout << "\033[1;31mSay goodbye to " << this->name << "\033[0m\n";
		}
		void		announce(void);
};

#endif

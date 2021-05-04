/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:38:49 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:38:50 by jehannedu        ###   ########.fr       */
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
		Zombie(void);
		~Zombie(void);
		void		announce(void);
};

#endif

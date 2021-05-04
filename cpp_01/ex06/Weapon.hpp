/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:41:26 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:41:28 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon
{
	private:
		std::string _type;
	public:
		const std::string &getType(void);
		void				setType(std::string type);
		Weapon(std::string type);
		~Weapon(void);
};

#endif

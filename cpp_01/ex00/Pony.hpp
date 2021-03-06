/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/03 11:14:16 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/03 11:14:17 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <ctype.h>
# include <string>
# include <sstream>
# include <string.h>

class	Pony
{
	private:
	public:
		std::string	_name;
		std::string	_mane;
		std::string	_age;
		std::string	_characteristic;
		Pony()
		{
			std::cout << "\033[1;33m*\033[0m \033[1;32mA new pony is born ! :)\033[0m \033[1;33m*\033[0m\n";
			std::cout << "This pony needs to have a name ! What's the name of your pony ? ";
			getline(std::cin, this->_name);
			std::cout << "Welcome to the world " << this->_name << " !" << std::endl;
		}
		~Pony()
		{
			std::cout << "\033[1;31mYour pony is dead :(\033[0m ";
			std::cout << "Good bye " << this->_name << " ..." << std::endl;
		}
		void	ft_fill(void);
};

void	ponyOnTheStack(void);
void	ponyOnTheHeap(void);

#endif

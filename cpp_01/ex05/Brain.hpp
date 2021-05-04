/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:40:02 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:40:03 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>

class Brain
{
    private:
    public:
        int number_of_neurons;
        int IQ;
        Brain(void);
        ~Brain(void);
        std::string    identify(void) const;
};

#endif

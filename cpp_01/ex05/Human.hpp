/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jehannedussert <marvin@42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 16:40:19 by jehannedu         #+#    #+#             */
/*   Updated: 2021/05/04 16:40:21 by jehannedu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <iostream>

class Human
{
    private:
    public:
        Human(void);
        ~Human(void);
        Brain const     brain;
        std::string     identify(void) const;
        const Brain     &getBrain(void);
};

#endif

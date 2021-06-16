/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:22:26 by jdussert          #+#    #+#             */
/*   Updated: 2021/06/16 11:22:27 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class	AssaultTerminator : public ISpaceMarine
{
	private:
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const &src);
		~AssaultTerminator(void);
		AssaultTerminator &operator=(AssaultTerminator const &rhs);
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

//std::ostream    &operator<<(std::ostream &o, AssaultTerminator const &rhs);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:22:47 by jdussert          #+#    #+#             */
/*   Updated: 2021/06/16 11:22:47 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

# include <iostream>

# include "ISpaceMarine.hpp"

class	TacticalMarine : public ISpaceMarine
{
	private:
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const &src);
		~TacticalMarine(void);
		TacticalMarine &operator=(TacticalMarine const &rhs);
		virtual ISpaceMarine* clone() const;
		virtual void battleCry() const;
		virtual void rangedAttack() const;
		virtual void meleeAttack() const;
};

//std::ostream    &operator<<(std::ostream &o, TacticalMarine const &rhs);

#endif

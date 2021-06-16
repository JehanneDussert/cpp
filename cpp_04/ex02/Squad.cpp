/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdussert <jdussert@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/16 11:20:18 by jdussert          #+#    #+#             */
/*   Updated: 2021/06/16 11:38:36 by jdussert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(void) : _s(NULL), _nb(0)
{
	return ;
}

Squad::Squad(Squad const &src)
{
	*this = src;

	return ;
}

Squad::~Squad(void)
{
	for (int i = 0; i < this->_nb; i++)
		delete this->_s[i];
	delete [] this->_s;

	return ;
}

Squad	&Squad::operator=(Squad const &rhs)
{
	if (this->_s)
	{
		for (int i = 0; i < this->_nb; i++)
			delete this->_s[i];
		delete [] this->_s;
		this->_nb = 0;
		this->_s = NULL;
	}
	for (int i = 0; i < rhs.getCount(); i++)
		this->push(rhs.getUnit(i)->clone());
	
	return *this;
}

int Squad::getCount() const
{
	return this->_nb;
}

ISpaceMarine* Squad::getUnit(int nb) const
{
	if (nb >= 0 && nb <= this->_nb)
		return this->_s[nb];
	return NULL;
}

int	Squad::check_unit(ISpaceMarine* new_s)
{
	for (int i = 0; i < this->_nb; i++)
		if (new_s == this->_s[i])
			return 0;
	return 1;
}


int Squad::push(ISpaceMarine* new_s)
{
	ISpaceMarine	**tmp;

	if (!new_s || !check_unit(new_s))
		return this->_nb;
	tmp = new ISpaceMarine*[this->_nb + 1];
	for (int i = 0; i < this->_nb; i++)
		tmp[i] = this->_s[i];
	tmp[this->_nb] = new_s;
	this->_nb++;
	delete [] this->_s;
	this->_s = tmp;

	return this->_nb;
}

/*std::ostream    &operator<<(std::ostream &o, Squad const &rhs)
{
	return o;
}*/

#include "Squad.hpp"

// In the end, the Squad we’re asking you to create is a simple container of Space
// Marines, which we’ll use to correctly structure your army.
// Upon copy construction or assignation of a Squad , the copy must be deep. Upon
// assignation, if there was any unit in the Squad before, they must be destroyed before
// being replaced. You can assume every unit will be created with new .
// When a Squad is destroyed, the units inside are destroyed also, in order.

Squad::Squad(void) :_s(NULL), _nb(0)
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
	(void)rhs;

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


// segf
int Squad::push(ISpaceMarine* new_s)
{
	ISpaceMarine	**tmp;

	if (!new_s || !check_unit(new_s))
		return this->_nb;
	tmp = new ISpaceMarine*[++this->_nb];
	for (int i = 0; i < this->_nb - 1; i++)
		tmp[i] = this->_s[i];
	std::cout << this->_nb << std::endl;
	this->_s[this->_nb] = new_s;
	std::cout << "ok\n";
	delete [] this->_s;
	this->_s = tmp;

	return this->_nb;
}

/*std::ostream    &operator<<(std::ostream &o, Squad const &rhs)
{
	return o;
}*/

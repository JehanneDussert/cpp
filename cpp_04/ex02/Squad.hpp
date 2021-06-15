#ifndef SQUAD_HPP
# define SQUAD_HPP

# include <iostream>

# include "ISquad.hpp"
# include "ISpaceMarine.hpp"

class	Squad : public ISquad
{
	private:
		ISpaceMarine	**_s;
		int				_nb;
	public:
		Squad(void);
		Squad(Squad const &src);
		~Squad(void);
		Squad &operator=(Squad const &rhs);
		virtual int getCount() const;
		virtual ISpaceMarine* getUnit(int) const;
		virtual int push(ISpaceMarine*);
		int check_unit(ISpaceMarine* new_s);
};

//std::ostream    &operator<<(std::ostream &o, Squad const &rhs);

#endif

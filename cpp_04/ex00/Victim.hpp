#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

# include "Sorcerer.hpp"

class	Victim
{
	private:
		Victim(void);
	public:
		Victim(Victim const &src);
		Victim(std::string name);
		virtual ~Victim(void);
		Victim &operator=(Victim const &rhs);
		virtual void	introduce(void) const;
		virtual void	getPolymorphed(void) const;
		std::string	name;
};

std::ostream    &operator<<(std::ostream &o, Victim const &rhs);

#endif

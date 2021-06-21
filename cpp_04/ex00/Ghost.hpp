#ifndef GHOST_HPP
# define GHOST_HPP

# include <iostream>

# include "Victim.hpp"
# include "Sorcerer.hpp"

class	Ghost : public Victim
{
	private:
	public:
		Ghost(Ghost const &src);
		Ghost(std::string name);
		virtual ~Ghost(void);
		Ghost &operator=(Ghost const &rhs);
		virtual void	getPolymorphed(void) const;
};

//std::ostream    &operator<<(std::ostream &o, Ghost const &rhs);

#endif

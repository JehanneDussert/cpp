#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>

# include "Victim.hpp"

class Victim;

class	Sorcerer
{
	private:
		Sorcerer(void);
	public:
		// The class can’t be instanciated without parameters
		Sorcerer(Sorcerer const &src);
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		Sorcerer &operator=(Sorcerer const &rhs);
		void	introduce(void) const;
		void	polymorph(Victim const &) const;
		std::string	name;
		std::string	title;
};

std::ostream    &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif

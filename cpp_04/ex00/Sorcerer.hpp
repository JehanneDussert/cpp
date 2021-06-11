#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>

# include "Victim.hpp"

class	Sorcerer
{
	private:
		std::string	_name;
		std::string	_title;
	public:
		// The class can’t be instanciated without parameters
		Sorcerer(void);
		Sorcerer(Sorcerer const &src);
		Sorcerer(std::string name, std::string title);
		~Sorcerer(void);
		Sorcerer &operator=(Sorcerer const &rhs);
		void	introduce(void);
		void	polymorph(Victim const &) const;
};

//std::ostream    &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif

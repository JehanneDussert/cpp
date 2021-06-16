#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

class	Character
{
	private:
	public:
		Character(void);
		Character(Character const &src);
		~Character(void);
		Character &operator=(Character const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, Character const &rhs);

#endif

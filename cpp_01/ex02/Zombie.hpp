#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	public:
		std::string	name;
		std::string	type;
		Zombie(std::string name, std::string type);
		~Zombie(void);
		void		announce(void);
};

#endif
#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class	ZombieEvent
{
	public:
		std::string	type;
		void		setZombieType(std::string type);
		Zombie		*newZombie(std::string name);
		void		randomChump(void);
};

#endif
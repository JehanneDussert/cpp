#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde
{
    private:
    public:
        int n;
        Zombie *z;
        ZombieHorde(int n);
        ZombieHorde(void);
        ~ZombieHorde(void);
        std::string	type;
		void		setZombieType(std::string type);
		void		announce(Zombie *z);
};

#endif
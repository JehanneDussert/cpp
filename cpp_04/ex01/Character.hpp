#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>

# include "AWeapon.hpp"
# include "Enemy.hpp"

class	Character
{
	private:
		Character(void);
		std::string _name;
	public:
		AWeapon* w;
		int ap;
		Character(std::string const & name);
		int getAPCost();
		Character(Character const &src);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		Character &operator=(Character const &rhs);
};

std::ostream    &operator<<(std::ostream &o, Character const &rhs);

#endif

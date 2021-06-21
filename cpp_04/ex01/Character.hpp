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
		AWeapon* _w;
		int _ap;
	public:
		Character(std::string const & name);
		Character(Character const &src);
		~Character();
		void recoverAP();
		void equip(AWeapon*);
		void attack(Enemy*);
		std::string getName() const;
		AWeapon* getWeapon() const;
		std::string	getWeaponName() const;
		int	getAp() const;
		Character &operator=(Character const &rhs);
};

std::ostream    &operator<<(std::ostream &o, Character const &rhs);

#endif

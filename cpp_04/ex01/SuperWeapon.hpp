#ifndef SUPERWEAPON_HPP
# define SUPERWEAPON_HPP

# include <iostream>

#include "AWeapon.hpp"

class	SuperWeapon : public AWeapon
{
	private:
	public:
		SuperWeapon(void);
		SuperWeapon(SuperWeapon const &src);
		~SuperWeapon(void);
		virtual void attack() const;
		SuperWeapon &operator=(SuperWeapon const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, SuperWeapon const &rhs);

#endif

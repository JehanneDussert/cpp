#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include <iostream>

#include "AWeapon.hpp"

class	PlasmaRifle : public AWeapon
{
	private:
	public:
		PlasmaRifle(void);
		PlasmaRifle(PlasmaRifle const &src);
		~PlasmaRifle(void);
		virtual void attack() const;
		PlasmaRifle &operator=(PlasmaRifle const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, PlasmaRifle const &rhs);

#endif

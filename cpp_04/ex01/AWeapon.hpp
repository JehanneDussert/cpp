#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>

class	AWeapon
{
	private:
		AWeapon(void);
	protected:
		//[...];
	public:
		std::string	name;
		int	apcost;
		int	damage;
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const &src);
		virtual ~AWeapon();
		std::string getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
		AWeapon &operator=(AWeapon const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, AWeapon const &rhs);

#endif

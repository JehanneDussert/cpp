#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void)
{
	return ;
}

NinjaTrap::NinjaTrap(NinjaTrap const &src)
{
	*this = src;

	return ;
}

NinjaTrap::NinjaTrap(std::string name) : _hit(60), _max_hit(60),
_energy(120), _max_energy(120), _level(1), _name(name),
_melee(60), _ranged(5), _armor(0)
{
	std::cout << "** NINJ4-TP ** constructor called !\n";

	return ;
}

NinjaTrap::~NinjaTrap(void)
{
	return ;
}

NinjaTrap	&NinjaTrap::operator=(NinjaTrap const &rhs)
{
	return *this;
}

void	NinjaTrap::rangedAttack(std::string const & target)
{
	NinjaTrap	t;

	t._name = target;
	std::cout << "* CL4P-TP * " << this->_name << " attaque " << target << " a distance, causant " << this->_ranged << " points de degats :(\n";
	t.takeDamage(this->_ranged);

	return ;
}

void	NinjaTrap::meleeAttack(std::string const & target)
{
	NinjaTrap	t;

	t._name = target;
	std::cout << "* CL4P-TP * " << this->_name << " attaque " << target << " en groupe, causant " << this->_melee << " points de degats :(\n";
	t.takeDamage(this->_melee);

	return ;
}

void	NinjaTrap::takeDamage(unsigned int amount)
{
	amount >= this->_armor ? amount -= this->_armor : amount = 0;
	this->_hit >= amount ? this->_hit -= amount : this->_hit = 0;
	std::cout << "* CL4P-TP * " << this->_name << " se prend une grosse attaque et a maintenant " << this->_hit << " points de vie ! :(\n";
	if (this->_hit == 0)
	{
		std::cout << "** ECHEC DU NIVEAU " << this->_level << " **\n";
		this->_level > 1 ? this->_level-- : this->_level = 1;
	}
	
	return ;
}

void	NinjaTrap::beRepaired(unsigned int amount)
{
	this->_hit + amount < this->_max_hit ? this->_hit += amount : this->_hit = this->_max_hit;
	this->_energy + amount < this->_max_energy ? this->_energy += amount : this->_energy = this->_max_energy;
	std::cout << "* CL4P-TP * " << this->_name << " récupère et a maintenant " << this->_hit << " points de vie et " << this->_energy << " points d'energie ! :)\n";
	if (this->_hit == this->_max_hit && this->_energy == this->_max_energy)
	{
		std::cout << "\n** NIVEAU " << this->_level << " COMPLETE POUR " << this->_name << " qui devient " << "Super " + this->_name << " !!! **\n\n";
		this->_name = "Super " + this->_name;
		this->_level++;
	}

	return ;
}

/*std::ostream    &operator<<(std::ostream &o, NinjaTrap const &rhs)
{
	return o;
}*/

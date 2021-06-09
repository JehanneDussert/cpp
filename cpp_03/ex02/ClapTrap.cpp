#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "** CL4P-TP ** constructor called !\n";

	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;

	return ;
}

ClapTrap::ClapTrap(int hit, int max_hit, int energy, int max_energy, int level, std::string name, 
int melee, int ranged, int armor) : _hit(hit), _max_hit(max_hit), _energy(energy), 
_max_energy(max_energy), _level(level), _name(name), _melee(melee), _ranged(ranged), _armor(armor)
{
	std::cout << "** CL4P-TP ** constructor called !\n";

	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "** CL4P-TP ** destructor called !\n";

	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &rhs)
{
	(void)rhs ;

	return *this;
}

void	ClapTrap::rangedAttack(std::string const & target)
{
	ClapTrap	t(100, 100, 120, 100, 1, target, 30, 20, 5);

	std::cout << "* CL4P-TP * " << this->_name << " attaque " << target << " a distance, causant " << this->_ranged << " points de degats :(\n";
	t.takeDamage(this->_ranged);

	return ;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	ClapTrap	t(100, 100, 120, 100, 1, target, 30, 20, 5);
	
	std::cout << "* CL4P-TP * " << this->_name << " attaque " << target << " en groupe, causant " << this->_melee << " points de degats :(\n";
	t.takeDamage(this->_melee);

	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
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

void	ClapTrap::beRepaired(unsigned int amount)
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

/*std::ostream    &operator<<(std::ostream &o, ClapTrap const &rhs)
{
	return o;
}*/

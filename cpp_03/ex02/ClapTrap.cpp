#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "** CL4P-TP ** constructor called !\n";

	return ;
}

ClapTrap::ClapTrap(std::string name) : _hit(100), _max_hit(100),
_energy(100), _max_energy(100), _level(1), _name(name), _melee(30),
_ranged(20), _armor(5)
{
	char		buf[512];

    std::srand(time(0));
    std::string apparition[] = {
		" apparait dans un nuage de fumee ", " debarque à 42 ", 
		" sort de nulle part ", " fonce dans le tas "
	};
	std::cout << "* CL4P-TP * " << name << apparition[std::rand() % 4] << std::endl;
	// this->rangedAttack("Bob");
	// this->takeDamage(80);
	// this->meleeAttack("Yolanda");
	// this->beRepaired(90);
	//std::cout << "Norminet surgit pour attaquer " << name << ", souhaites-tu l'affronter ? [y/n] ";
	//std::cin >> buf;
	// if (!strcmp(buf, "y"))
	// 	this->challengeNewcomer("Norminet");
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;

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
	ClapTrap	t(target);

	std::cout << "* FR4G-TP * " << this->_name << " attaque " << target << " a distance, causant " << this->_ranged << " points de degats :(\n";
	t.takeDamage(this->_ranged);

	return ;
}

void	ClapTrap::meleeAttack(std::string const & target)
{
	ClapTrap	t(target);

	std::cout << "* FR4G-TP * " << this->_name << " attaque " << target << " en groupe, causant " << this->_melee << " points de degats :(\n";
	t.takeDamage(this->_melee);

	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	amount >= this->_armor ? amount -= this->_armor : amount = 0;
	this->_hit >= amount ? this->_hit -= amount : this->_hit = 0;
	std::cout << "* FR4G-TP * " << this->_name << " se prend une grosse attaque et a maintenant " << this->_hit << " points de vie ! :(\n";
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
	std::cout << "* FR4G-TP * " << this->_name << " récupère et a maintenant " << this->_hit << " points de vie et " << this->_energy << " points d'energie ! :)\n";
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

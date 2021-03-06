#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return ;
}

ScavTrap::ScavTrap(std::string name) : _hit(100), _max_hit(100),
_energy(100), _max_energy(100), _level(1), _name(name), _melee(30),
_ranged(20), _armor(5)
{
	srand(time(0));
    std::string apparition[] = {
		" apparait dans un nuage de fumee ", " debarque à 42 ", 
		" sort de nulle part ", " fonce dans le tas "
	};
	std::cout << "* SC4V-TP * " << name << apparition[rand() % 4] << std::endl;

	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;

	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "* SC4V-TP * " << this->_name << " fuit 42 !\n";

	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	(void)rhs;

	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "* SC4V-TP * " << this->_name << " attaque " << target << " au corps et provoque " << this->_ranged << " points de degats :(\n";

	return ;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "* SC4V-TP * " << this->_name << " attaque " << target << " avec sa team et cause " << this->_melee << " points de degats :(\n";

	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	amount >= this->_armor ? amount -= this->_armor : amount = 0;
	this->_hit >= amount ? this->_hit -= amount : this->_hit = 0;
	std::cout << "* SC4V-TP * " << this->_name << " se prend une grosse attaque et a maintenant " << this->_hit << " points de vie ! :(\n";
	if (this->_hit == 0)
	{
		std::cout << "** ECHEC DU NIVEAU " << this->_level << " **\n";
		this->_level > 1 ? this->_level-- : this->_level = 1;
	}
	
	return ;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hit + amount < this->_max_hit ? this->_hit += amount : this->_hit = this->_max_hit;
	this->_energy + amount < this->_max_energy ? this->_energy += amount : this->_energy = this->_max_energy;
	std::cout << "* SC4V-TP * " << this->_name << " récupère et a maintenant " << this->_hit << " points de vie et " << this->_energy << " points d'energie ! :)\n";
	if (this->_hit == this->_max_hit && this->_energy == this->_max_energy)
	{
		std::cout << "\n** NIVEAU " << this->_level << " COMPLETE POUR " << this->_name << " qui devient " << "Squatter " + this->_name << " !!! **\n\n";
		this->_name = "Super " + this->_name;
		this->_level++;
	}

	return ;
}

void	ScavTrap::challengeNewcomer(std::string const & target)
{
	srand(time(0));
    std::string attack[] = {
		"distrait avec de la paté ", "balance un piscineux en offrande à ", 
		"demande au gardien de calmer ",
		"amadoue avec une sérénade ", "chatouille les petites papattes de "
	};
	if (this->_energy >= 25)
	{
		std::cout << "* SC4V-TP * " << this->_name << " utilise une attaque speciale et " << attack[rand() % 5] << target << " !\n";
		this->_energy -= 25;
	}
	else
		std::cout << "* SC4V-TP * << " << this->_name << "n'a plus assez d'energie pour lancer l'attaque speciale :( Il te reste " << this->_energy << " points d'energie !\n";
	std::string challenge[] = {
		"lancer de haches ", "lancer de piscineux ", 
		"echecs ", "concours de celui qui aura le plus de TIG ", 
		"pierre, papier, ciseau "
	};
	std::cout << "* SC4V-TP * " << this->_name << " decide de defier Norminet au " << challenge[rand() % 5] << "!\n";
	std::string winner[] = {
		target, this->_name
	};
	std::cout << "* SC4V-TP * " << winner[rand() % 2] << " remporte ce defi !!!\n";
	
	return ;
}

/*std::ostream    &operator<<(std::ostream &o, ScavTrap const &rhs)
{
	return o;
}*/

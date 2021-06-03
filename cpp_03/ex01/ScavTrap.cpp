#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	return ;
}

ScavTrap::ScavTrap(std::string name) : _hit(100), _max_hit(100),
_energy(100), _max_energy(100), _level(1), _name(name), _melee(30),
_ranged(20), _armor(5)
{
	char		buf[512];

    std::srand(time(0));
    std::string apparition[] = {
		" apparait caché derriere le foodtruck ", " descend du ciel pour casser des gueules ", 
		" retire sa cape d'invisibilité ", " sort de sous une banquette de la Cantina "
	};
	std::cout << "* FR4G-TP * " << name << apparition[std::rand() % 4] << std::endl;
	this->rangedAttack("Bob");
	this->takeDamage(80);
	this->meleeAttack("Yolanda");
	this->beRepaired(90);
	std::cout << "Norminet surgit pour attaquer " << name << ", souhaites-tu l'affronter ? [y/n] ";
	std::cin >> buf;
	if (!strcmp(buf, "y"))
		this->challengeNewcomer("Norminet");
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	*this = src;

	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "* FR4G-TP * " << this->_name << " disparait dans la brume !\n";

	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &rhs)
{
	(void)rhs;

	return *this;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "* FR4G-TP * " << this->_name << " attaque " << target << " a distance, causant " << this->_ranged << " points de degats :(\n";

	return ;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "* FR4G-TP * " << this->_name << " attaque " << target << " a distance, causant " << this->_melee << " points de degats :(\n";

	return ;
}

void	ScavTrap::takeDamage(unsigned int amount)
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

void	ScavTrap::beRepaired(unsigned int amount)
{
	this->_hit + amount < this->_max_hit ? this->_hit += amount : this->_hit = this->_max_hit;
	this->_energy + amount < this->_max_energy ? this->_energy += amount : this->_energy = this->_max_energy;
	std::cout << "* FR4G-TP * " << this->_name << " récupère et a maintenant " << this->_hit << " points de vie et " << this->_energy << " points d'energie ! :)\n";
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
    std::srand(time(0));
    std::string attack[] = {
		"distrait Norminet avec de la paté", "balance un piscineux en offrande", 
		"demande au gardien de calmer Norminet comme une grosse victime",
		"amadoue Norminet avec une sérénade", "chatouille les petites papattes de Norminet"
	};
	if (this->_energy >= 25)
	{
		std::cout << "* FR4G-TP * " << this->_name << " utilise une attaque speciale et " << attack[std::rand() % 5] << " !\n";
		this->_energy -= 25;
	}
	else
		std::cout << "* FR4G-TP * << " << this->_name << "n'a plus assez d'energie pour lancer l'attaque speciale :( Il te reste " << this->_energy << " points d'energie !\n";
	
	return ;
}

/*std::ostream    &operator<<(std::ostream &o, ScavTrap const &rhs)
{
	return o;
}*/

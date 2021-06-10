#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	return ;
}

FragTrap::FragTrap(std::string name) : _hit(100), _max_hit(100),
_energy(100), _max_energy(100), _level(1), _name(name), _melee(30),
_ranged(20), _armor(5)
{
    srand(time(0));
    std::string apparition[] = {
		" apparait caché derriere le foodtruck ", " descend du ciel pour casser des gueules ", 
		" retire sa cape d'invisibilité ", " sort de sous une banquette de la Cantina "
	};
	std::cout << "* FR4G-TP * " << name << apparition[rand() % 4] << std::endl;

	return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
	*this = src;

	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "* FR4G-TP * " << this->_name << " disparait dans la brume !\n";

	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &rhs)
{
	(void)rhs;

	return *this;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	FragTrap	t(target);

	std::cout << "* FR4G-TP * " << this->_name << " attaque " << target << " a distance, causant " << this->_ranged << " points de degats :(\n";
	t.takeDamage(this->_ranged);

	return ;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	FragTrap	t(target);

	std::cout << "* FR4G-TP * " << this->_name << " attaque " << target << " en groupe, causant " << this->_melee << " points de degats :(\n";
	t.takeDamage(this->_melee);

	return ;
}

void	FragTrap::takeDamage(unsigned int amount)
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

void	FragTrap::beRepaired(unsigned int amount)
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

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    srand(time(0));
    std::string attack[] = {
		"balance Norminet ", "renverse son café plein de fourmies à ", 
		"fait un croche-pattes dans les escaliers à ", "ecrase avec ses coudes ",
		"balance des frites carbo du foodtruck sur "
	};
	if (this->_energy >= 25)
	{
		std::cout << "* FR4G-TP * " << this->_name << " utilise une attaque speciale et " << attack[rand() % 5] << target << " !\n";
		this->_energy -= 25;
	}
	else
		std::cout << "* FR4G-TP * << " << this->_name << "n'a plus assez d'energie pour lancer l'attaque speciale :( Il te reste " << this->_energy << " points d'energie !\n";
	
	return ;
}

/*std::ostream    &operator<<(std::ostream &o, FragTrap const &rhs)
{
	return o;
}*/

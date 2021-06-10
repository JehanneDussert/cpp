#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "** SC4V-TP ** constructor called !\n";

	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
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

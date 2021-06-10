#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	std::cout << "** FR4G-TP ** constructor called !\n";

	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5)
{
    srand(time(0));

    std::string apparition[] = {
		" apparait caché derriere le foodtruck ", " descend du ciel pour casser des gueules ", 
		" retire sa cape d'invisibilité ", " sort de sous une banquette de la Cantina "
	};
	std::cout << "* FR4G-TP * " << this->_name << apparition[rand() % 4] << std::endl;

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

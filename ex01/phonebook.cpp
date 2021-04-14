#include "phonebook.hpp"

// Écrivez un incroyable programme qui se comporte comme un annuaire nul.
// Prenez le temps de donner à votre exécutable un nom pertinent. Lorsque le programme
// démarre, il demande l’input de l’utilisateur : vous devez accepter la commande ADD, la
// commande SEARCH ou la commande EXIT. Toute autre entrée est supprimée.
// Le programme commence vide (pas de contacts), n’utilise pas d’allocation dynamique
// et ne peut pas stocker plus de 8 contacts. Si un neuvième contact est ajouté, veuillez
// définir un comportement pertinent.

phonebook::phonebook(void)
{
	this->_contacts_nb = 0;
	this->_criterias = 11;
	std::cout << "Constructor called" << std::endl;

	return ;
}

phonebook::~phonebook(void)
{
	return ;
}

int		phonebook::_getfoo(char *name) const
{
	int i;

	for (i = 0; i < this->_contacts_nb ; i++)
		if (!strcmp(name, this->contact[i]))
			return -1;
	return 0;
}

void	phonebook::_ft_search(char *name)
{

}

int	phonebook::_setfoo(int n, char *name)
{
	int	i;
	if (n == 8)
		return -1;
	for (i =  0; i < this->_criterias; i++)
	{
		this->contact[this->_criterias][n] = name;
		this->_contacts_nb = n;
	}
	return 0;
}

int		phonebook::_ft_add(char *name)
{
	if (this->_getfoo(name) == -1)
		std::cout << "Error, you have already add this phone contact !" << std::endl;
	else if (this->_setfoo(this->_contacts_nb, name) == -1)
		std::cout << "Error, you have already 8 phone contacts !" << std::endl;
	return 0;
}

void	phonebook::ft_start(phonebook instance, char *buf)
{
	if (!strcmp(buf, "ADD"))
		instance._ft_add(buf);
	else if (!strcmp(buf, "SEARCH"))
		instance._ft_search(buf);

	return ;
}

int main (void)
{
	char		buf[512];
	phonebook	instance;

	std::cout << "Enter an input (ADD, SEARCH, EXIT) : ";
	std::cin >> buf;
	if (!strcmp(buf, "EXIT"))
		std::cout << "Bye bye !" << std::endl;
	else if (!strcmp(buf, "ADD") || !strcmp(buf, "SEARCH"))
		instance.ft_start(instance, buf);
	else
		std::cout << "Error, wrong argument !" << std::endl;
	return 0;
}

#include "phonebook.hpp"

// Écrivez un incroyable programme qui se comporte comme un annuaire nul.
// Prenez le temps de donner à votre exécutable un nom pertinent. Lorsque le programme
// démarre, il demande l’input de l’utilisateur : vous devez accepter la commande ADD, la
// commande SEARCH ou la commande EXIT. Toute autre entrée est supprimée.
// Le programme commence vide (pas de contacts), n’utilise pas d’allocation dynamique
// et ne peut pas stocker plus de 8 contacts. Si un neuvième contact est ajouté, veuillez
// définir un comportement pertinent.

// const

namespace	add
{
	char	**book;

}

namespace	search
{

}

namespace	print
{

}

sample1::sample1(char p1, int p2, float p3)
{
	std::cout << "Constructor sample1" << std::endl;
	this->a1 = p1;
	std::cout << "\tthis->a1 : " << this->a1 << std::endl;
	this->a2 = p2;
	std::cout << "\tthis->a2 : " << this->a2 << std::endl;
	this->a3 = p3;
	std::cout << "\tthis->a3 : " << this->a3 << std::endl;
	return ;
}

sample1::~sample1(void)
{
	std::cout << "Destructor sample1" << std::endl;
	return ;
}

sample2::sample2(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3)
{
	std::cout << "Constructor sample2" << std::endl;
	std::cout << "\tthis->a1 : " << this->a1 << std::endl;
	std::cout << "\tthis->a2 : " << this->a2 << std::endl;
	std::cout << "\tthis->a3 : " << this->a3 << std::endl;
	return ;
}

sample2::~sample2(void)
{
	std::cout << "Destructor sample2" << std::endl;
	return ;
}

sample::sample(float const f) : pi(f), qd(42)
{
	std::cout << "Constructor sample" << std::endl;
	
	return ;
}

sample::~sample(void)
{
	std::cout << "Destructor sample" << std::endl;

	return ;
}

void	sample::bar(void) const 
// on signifie avec ce const que cette fonction 
// membre ne modifiera jamais l'instance courant
// donc on peut pas faire de this->value
{
	std::cout << "\tthis->pi : " << this->pi << std::endl;
	std::cout << "\tthis->qd : " << this->qd << std::endl;

	return ;
}

sample3::sample3(void)
{
	std::cout << "Constructor sample 3" << std::endl;

	this->publicfoo = 0;
	std::cout << "\tthis->publicfoo : " << this->publicfoo << std::endl;
	this->_privatefoo = 0;
	std::cout << "\tthis->privatefoo : " << this->_privatefoo << std::endl;
	
	this->publicbar();
	this->_privatebar();
	
	return ;
}

sample3::~sample3(void)
{
	std::cout << "Destructor sample 3" << std::endl;
}

void	sample3::publicbar(void) const
{
	std::cout << "Public function" << std::endl;
	
	return ;
}

void	sample3::_privatebar(void) const
{
	std::cout << "Private function" << std::endl;
	
	return ;
}

void	sample::bar(void) const 
// on signifie avec ce const que cette fonction 
// membre ne modifiera jamais l'instance courant
// donc on peut pas faire de this->value
{
	std::cout << "\tthis->pi : " << this->pi << std::endl;
	std::cout << "\tthis->qd : " << this->qd << std::endl;

	return ;
}

int main (void)
{
	//sample1		instance1('a', 42, 4.2f);
	//sample2		instance2('z', 13, 3.14f);
	//sample		instance(3.14f);
	//instance.bar();
	sample3			instance;

	return 0;
}

/*
int main	(void)
{
	char	buff[512];
	char	name[512];
	int		i;
	int		j;

	std::cout << "Enter an input (ADD, SEARCH, EXIT) : ";
	std::cin >> buff;
    for (j = 0; buff[j] != '\0' ; j++)
	{
        for (i = j; buff[i] != ' '; i++)
		{
			std::cout << buff[i];
		}
	}
	std::cout << '\n';
	return 0;
}*/
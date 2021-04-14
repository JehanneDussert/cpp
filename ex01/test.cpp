#include "test.hpp"

// const

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

test2::test2(void)
{
	std::cout << "Constructor called" << std::endl;
	this->setfoo(0);
	std::cout << "Foo : " << this->_foo << std::endl;

	return ;
}

test2::~test2(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

int		test2::getfoo(void) const
{
	return this->_foo;
}

void	test2::setfoo(int v)
{
		if (v >= 0)
			this->_foo = v;
		
		return ;
}

phonebook::phonebook(void)
{
	std::cout << "Constructor called" << std::endl;

	return ;
}

phonebook::~phonebook(void)
{
	std::cout << "Destructor called" << std::endl;

	return ;
}

int		phonebook::getfoo(void) const
{
	return this->_contacts_nb;
}

int	phonebook::setfoo(int n, char *name)
{
		if (n <= 8)
		{
			this->_contacts_nb = n;
			this->contact[n] = name;
			return 0;
		}
		return -1;
}

int main (void)
{
	test2	instance;

	instance.setfoo(42);
	std::cout << "Foo : " << instance.getfoo() << std::endl;
	instance.setfoo(-42);
	std::cout << "Foo : " << instance.getfoo() << std::endl;
	instance.getfoo();
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
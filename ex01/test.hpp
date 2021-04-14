#ifndef TEST_H
# define TEST_H

# include <iostream>
# include <ctype.h>

 // a un scope par defaut public
struct	test1
{
	int	foo;

	test1(void);
	~test1(void);

	void	bar(void) const;
};

// a un scope par defaut prive, vaut mieux l'utiliser
class	test2
{
public:
	int	foo;

	test2(void);
	~test2(void);

	int		getfoo(void) const;
	void	setfoo(int v);

private:
	int		_foo;
};

class sample3
{
	// public et private vont permettre de controler l''encapsulation
	// des membres de notre classe -> attributs et fonctions membres 
	// qui seront visibles uniquement depuis l'interieur de la classe
	// ou bien depuis l'exterieur
public: //  accessible dep interieur / exterieur de la classe
	int		publicfoo;

	sample3(void);
	~sample3(void);

	void 	publicbar(void) const;

private: // attributs / fonctions membres prives 
// 		//-> accessibles quue dep interieur de la classe
	int		_privatefoo;

	void	_privatebar(void) const;
};

class sample2
{
public:
	char	a1;
	int		a2;
	float	a3;

	sample2(char p1, int p2, float p3);
	~sample2(void);
};

class sample1
{
public:
	char	a1;
	int		a2;
	float	a3;

	sample1(char p1, int p2, float p3);
	~sample1(void);
};

class sample
{
public:
	float const pi;
	int			qd;

	sample(float const f);
	~sample(void);

	//void bar(void) const;
};

// constructeurs/destructeurs n'ont pas de type de retour

// constructeur
class phonebook
{
private:
    /* data */
public:
    int     test; // = un attribut de l'intance
    void    lol(void); // = fonction d'instance

    phonebook(void);
    ~phonebook(void);
};

phonebook::phonebook()
{
}
// destructeur
phonebook::~phonebook()
{
}

#endif
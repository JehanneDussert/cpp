#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <ctype.h>

class	phonebook
{
public:
	int		foo;
	phonebook(void);
	~phonebook(void);
	void	ft_start(phonebook instance, char *buf);

private:
	int		_criterias;
	int		_contacts_nb;
	int		_getfoo(char *name) const;
	int		_setfoo(int n, char *name);
	int		_ft_add(char *name);
	void	_ft_search(char *name);
	char 	**contact[8];
};

#endif
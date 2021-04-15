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
	// char	*_first_name;
	// char	*_last_name;
	// char	*_nickname;
	// char	*_login;
	// char	*_postal_addr;
	// char	*_e_mail;
	// char	*_phone;
	// char	*_bday;
	// char	*_meal;
	// char	*_underwear;
	// char	*_secret;
	int		_criterias;
	int		_contacts_nb;
	int		_getfoo(char *name) const;
	int		_setfoo(int n, char *name);
	int		_ft_add(void);
	void	_ft_search(void);
	char 	**contact[8];
	char	*criterias[11];
};

#endif
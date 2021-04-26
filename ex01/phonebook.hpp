#ifndef PHONEBOOK_H
# define PHONEBOOK_H

# include <iostream>
# include <ctype.h>
# include <string>
# include <sstream>

class	contact
{
public:
	int		foo;
	contact(void);
	~contact(void);
	static int	ft_contacts_nb(void);
	static void ft_contacts_inc(void);
	static void	ft_print(contact &contact);
	void		ft_fill(void);

private:
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_login;
	std::string	_postal_addr;
	std::string	_e_mail;
	std::string	_phone;
	std::string	_bday;
	std::string	_meal;
	std::string	_underwear;
	std::string	_secret;
	static int	_contacts_nb;
};

int			getfoo(std::string name, contact contact[8]);
int			setfoo(contact &contact, int n);
void		ft_search(contact contact[8]);
void		ft_start(contact contact[8], char *buf);

#endif
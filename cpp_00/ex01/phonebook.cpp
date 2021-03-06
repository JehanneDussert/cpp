#include "phonebook.hpp"

contact::contact(void)
{
	return ;
}

int contact::_contacts_nb = 0;

contact::~contact(void)
{
	return ;
}

void	ft_search(contact contact[8])
{
	int	n = contact::ft_contacts_nb();
	int	contact_id = 0;
	int error;

	if (n == 0)
	{
		std::cout << "You do not have any contact in your phonebook :(" << std::endl;
		return ;
	}
	ft_print_phone(contact);
	while (contact_id <= 0 || contact_id > n || error)
	{	
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Choose an integer between 1 and "; std::cout << n; std::cout << " : ";
		std::cin >> contact_id;
		if ((error = std::cin.fail())){
			std::cout << "Error, you enter a wrong contact id." << std::endl;
			contact_id = -1;	
			std::cin.clear();
			std::cin.ignore();
			continue ;
		}
	}
	contact::ft_print(contact[contact_id - 1]);
	return ;
}

int	setfoo(contact &contact, int n)
{
	if (n == 8)
		return -1;
	contact.ft_fill();
	contact::ft_contacts_inc();
	return 0;
}

static void	ft_add(contact contact[8])
{
	int n = contact::ft_contacts_nb();

	if (setfoo(contact[n], n) == -1)
		std::cout << "Error, you have already 8 phone contacts !" << std::endl;	
	return ;
}

void	ft_start(contact contact[8], char *buf)
{
	if (!strcmp(buf, "ADD"))
		ft_add(contact);
	else if (!strcmp(buf, "SEARCH"))
		ft_search(contact);

	return ;
}

int main (void)
{
	char		buf[512];
	contact		contact[8];

	while (1)
	{
		std::cout << "Enter an input (ADD, SEARCH, EXIT) : ";
		std::cin >> buf;
		if (!strcmp(buf, "EXIT"))
			break ;
		else if (!strcmp(buf, "ADD") || !strcmp(buf, "SEARCH"))
			ft_start(contact, buf);
		else
			std::cout << "Error, wrong argument !" << std::endl;
	}
	std::cout << "Bye bye ! :)" << std::endl;
	return 0;
}

#include "phonebook.hpp"

void contact::ft_contacts_inc(void)
{
	contact::_contacts_nb++;
}

int	contact::ft_contacts_nb(void)
{
	return (contact::_contacts_nb);
}

void	contact::ft_print(contact &contact)
{
	std::cout << "First name : ";
	std::cout << contact._first_name << std::endl;
	std::cout << "Last name : ";
	std::cout << contact._last_name << std::endl;
	std::cout << "Nickname : ";
	std::cout << contact._nickname << std::endl;
	std::cout << "Login : ";
	std::cout << contact._login << std::endl;
	std::cout << "Postal address : ";
	std::cout << contact._postal_addr << std::endl;
	std::cout << "E-mail : ";
	std::cout << contact._e_mail << std::endl;
	std::cout << "Phone number : ";
	std::cout << contact._phone << std::endl;
	std::cout << "Birthday date : ";
	std::cout << contact._bday << std::endl;
	std::cout << "Favorite meal : ";
	std::cout << contact._meal << std::endl;
	std::cout << "Underwear color : ";
	std::cout << contact._underwear << std::endl;
	std::cout << "Darkest secret : ";
	std::cout << contact._secret << std::endl;
}

void	ft_draw_column(std::string str)
{
	unsigned long int i;
	unsigned long int spaces = 10 - str.size();

	for (i = 0; i < spaces && spaces < 9; i++)
		std::cout << ' ';
	if (spaces < 0 || spaces > 10){
		for (i = 0; i < 9; i++)
			std::cout << str[i];
		std::cout << ".";
	}
	else
		std::cout << str;
	std::cout << '|';
}

void	contact::ft_print_contact(void)
{
	std::cout << '|';
	ft_draw_column(this->_first_name);
	ft_draw_column(this->_last_name);
	ft_draw_column(this->_nickname);
	std::cout << std::endl;
}

void	ft_print_phone(contact contact[8])
{
	int i;
	int j;
	int n = contact::ft_contacts_nb();

	std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
	for (i = 0; i < n; i++){
		std::cout << '|';
		for (j = 0; j < 9; j++)
			std::cout << ' ';
		std::cout << i + 1;
		contact[i].ft_print_contact();
	}
}

void	contact::ft_fill(void)
{
	std::cin.ignore();
	std::cout << "First name : ";
	std::getline(std::cin, this->_first_name);
	std::cout << "Last name : ";
	std::getline(std::cin, this->_last_name);
	std::cout << "Nickname : ";
	std::getline(std::cin, this->_nickname);
	std::cout << "Login : ";
	std::getline(std::cin, this->_login);
	std::cout << "Postal address : ";
	std::getline(std::cin, this->_postal_addr);
	std::cout << "E-mail : ";
	std::getline(std::cin, this->_e_mail);
	std::cout << "Phone number : ";
	std::getline(std::cin, this->_phone);
	std::cout << "Birthday date : ";
	std::getline(std::cin, this->_bday);
	std::cout << "Favorite meal : ";
	std::getline(std::cin, this->_meal);
	std::cout << "Underwear color : ";
	std::getline(std::cin, this->_underwear);
	std::cout << "Darkest secret : ";
	std::getline(std::cin, this->_secret);
}

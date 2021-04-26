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

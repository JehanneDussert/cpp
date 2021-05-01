#include "Pony.hpp"

void	Pony::ponyOnTheStack(Pony &Pony)
{
	if (!Pony._characteristic.compare("fast")){
		std::cout << Pony._name << " gallops with its " << Pony._mane << " mane in the wind ! Incredible, it jumps the obstales without difficulty !!\n";
		std::cout << "Bravo " << Pony._name << " !!!\n";
		Pony::_first_result = 1;
	}
	else
	{
		std::cout << Pony._name << " starts off well, but soon gets left behind by the other ponies :( ";
		if (!Pony._mane.compare("long"))
			std::cout << "Oh no, little pony! His long mane blocks his view and he runs into the bushes !\n";
		std::cout << "Poor " << Pony._name << "...\n";
		Pony::_first_result = 0;
	}
	return ;
}

void	Pony::ponyOnTheHeap(Pony* Pony)
{
	if (!Pony->_characteristic.compare("fast"))
	{
		std::cout << Pony->_name << " gallops with its " << Pony->_mane << " mane in the wind ! Incredible, it jumps the obstales without difficulty !!\n";
		std::cout << "Bravo " << Pony->_name << " !!!\n";
		Pony::_second_result = 1;
	}
	else
	{
		std::cout << Pony->_name << " starts off well, but soon gets left behind by the other ponies :( ";
		if (!Pony->_mane.compare("long"))
			std::cout << "Oh no, little pony! His long mane blocks his view and he runs into the bushes ! ";
		std::cout << "Poor " << Pony->_name << "...\n";
		Pony::_second_result = 0;
	}
	return ;
}
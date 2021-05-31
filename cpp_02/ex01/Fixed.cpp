#include "Fixed.hpp"

Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called\n";

    return ;
}

Fixed::Fixed(Fixed const &src)
{
	std::cout << "Copy constructor called\n";
	*this = src;

    return ;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called\n";
    this->_value = n << this->_bits;

    //Un constructeur qui prend un const int en paramètre et qui 
    // le converti à sa valeur fixe(8) correspondante. 
    // La partie fractionnelle doit être initialisée comme dansl’ex00.
    return ;

}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
    //•Un constructeur qui prend un const float en paramètre et et 
    //le convertit à savaleur fixe(8) correspondante. 
    //La partie fractionnelle doit être initialisée commedans l’ex00.
    this->_value = roundf(n * (1 <<  this->_bits));
    std::cout << (this->_value) << std::endl;
    return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";

    return ;
}

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called\n";

    return this->_value;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called\n";
	this->_value = rhs._value;

	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;

    return ;
}

float   Fixed::toFloat(void) const
{
    float   floatValue;

    floatValue = 0.1; // trouver formule conversion    
    int intValue;

    intValue = (int)floatValue;
    std::cout << intValue << std::endl;
    return floatValue;
    //•Une fonction membre float toFloat(void) const;
    //qui convertit un nombres à point fixe en float.
}

int     Fixed::toInt(void) const
{
    int intValue;

    intValue = this->_value / this->_bits; // trouver formule
    std::cout << "\nhere :";
    std::cout << intValue << std::endl;
    return intValue;
    //•Une fonction membreint toInt(void) const;
    //qui convertit un nombres à pointfixe en int.
}

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs)
{
    o << rhs.toFloat();

    return o;
}

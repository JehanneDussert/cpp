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
    
	return ;

}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called\n";
    this->_value = roundf(n * (1 <<  this->_bits));

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
	this->_value = rhs.getRawBits();

	return *this;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;

    return ;
}

float   Fixed::toFloat(void) const
{
    return ((double)this->_value / (double)(1 << this->_bits));
}

int     Fixed::toInt(void) const
{
	return this->_value >> this->_bits;
}

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();

	return o;
}

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

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";

    return ;
}

Fixed	&Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called\n";
	this->_value = rhs.getRawBits();

	return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";

    return this->_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;

    return ;
}

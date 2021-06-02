#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
		int					_value;
		const static int	_bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(const int n);
		Fixed(const float n);
		~Fixed(void);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(Fixed const &rhs);
		bool	operator>(const Fixed &rhs) const;
		bool	operator<(const Fixed &rhs) const;
		bool	operator>=(Fixed const &rhs);
		bool	operator<=(Fixed const &rhs);
		bool	operator==(Fixed const &rhs);
		bool	operator!=(Fixed const &rhs);
		Fixed	operator+(Fixed const &rhs);
		Fixed	operator-(Fixed const &rhs);
		Fixed	operator*(Fixed const &rhs);
		Fixed	operator/(Fixed const &rhs);
		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
		const static Fixed	&max(const Fixed &a, const Fixed &b);
		const static Fixed	&min(const Fixed &a, const Fixed &b);
};

std::ostream	&operator<<(std::ostream &o, Fixed const &rhs);
const Fixed		&max(const Fixed &a, const Fixed &b);
const Fixed		&min(const Fixed &a, const Fixed &b);

#endif

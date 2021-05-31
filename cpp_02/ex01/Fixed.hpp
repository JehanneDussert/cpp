#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
	private:
        int                 _value;
		const static int	_bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(const int n);
        Fixed(const float n);
		~Fixed(void);
		int		getRawBits(void) const;
        float   toFloat(void) const;
        int     toInt(void) const;
		void	setRawBits(int const raw);
		Fixed & operator=(Fixed const &rhs);
};

std::ostream    &operator<<(std::ostream &o, Fixed const &rhs);

#endif

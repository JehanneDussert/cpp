#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <string.h>

class	Fixed
{
	private:
		int					_value;
		static int const	_bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &src);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed & operator=(Fixed const &rhs);
};

#endif

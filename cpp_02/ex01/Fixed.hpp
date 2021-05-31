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

//Vous ajouterez aussi l’overload suivant dans votre header et votre fichier source :
//•Overload de«qui insère une représentation de votre nombre à point fixe dansl’output demandé.

#endif

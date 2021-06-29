#include "convert.hpp"

void	ft_print_char(double d)
{
	if (!(d >= CHAR_MIN && d <= CHAR_MAX))
		std::cout << "chat: impossible\n";
	else if (!(d >= MIN && d <= MAX))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(d) << "'" << std::endl;
}

void	ft_print_int(double d)
{
	if (d <= INT_MAX && d >= INT_MIN)
		std::cout << "int: " << static_cast<int>(d) << std::endl;
	else
		std::cout << "int: impossible\n";
}

void	ft_print_float(double d)
{
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f\n";
}

void	ft_print_double(double d)
{
	std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
}

int		ft_convert(const char *s)
{
	double d = atof(s);

	ft_print_char(d);
	ft_print_int(d);
	ft_print_float(d);
	ft_print_double(d);

	return 0;
}

#include "convert.hpp"

// int		ft_is_char(char c)
// {
// 	if (c >= MIN && c <= MAX && (c < '0' || c > '9'))
// 		return 1;
// 	return 0;
// }

// void	ft_print_char(double d)
// {
// 	std::cout << "char: ";
// 	for (int i = 0; s[i]; i++)
// 		if (!(s[i] >= MIN && s[i] <= MAX))
// 		{
// 			std::cout << "Non displayable\n";
// 			return ;
// 		}
	
// }

// void	ft_print_int(double d)
// {
// 	std::cout << "int: ";
// 	for (int i = 0; s[i]; i++)
// 	{
// 		if (s[i] == '.' || s[i] == 'f')
// 			i++;
// 		else if (ft_is_char(s[i]))
// 		{
// 			std::cout << "impossible\n";
// 			return ;
// 		}
// 	}
// 	std::cout << std::stoi (s, nullptr, 10) << std::endl;
// }

int		check_type(double d)
{
	std::cout << d << std::endl;
	// ft_print_char(d);
	// ft_print_int(d);
	// ft_print_float(d);
	// ft_print_double(d);

	return 0;
}

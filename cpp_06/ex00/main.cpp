#include "convert.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "Error. Wrong number of arguments.\n";
    else
        ft_convert(av[1]);

    return 0;
}

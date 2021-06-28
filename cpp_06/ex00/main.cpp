#include "convert.hpp"

#include <iostream>   // std::cout
#include <string>     // std::string, std::stoi


int main(int ac, char **av)
{
    if (ac != 2)
        std::cout << "Error. Wrong number of arguments.\n";
    else
        check_type(atof(av[1]));

    return 0;
}

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0

// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan

// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0

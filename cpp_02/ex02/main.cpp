#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed a;
    // Fixed const b(Fixed(5.05f) * Fixed(2));
    // Fixed const c(Fixed(5) / Fixed(2));
    // Fixed const d(Fixed(5.234f) + Fixed(2.123f));
    // Fixed n(1.56f);
    // Fixed lol(1.56f);
    // if (n == lol)
    //     std::cout << "mdr\n";
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    //std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << c << std::endl;
    // std::cout << d << std::endl;
    //std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}

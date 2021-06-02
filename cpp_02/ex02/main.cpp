#include <iostream>
#include "Fixed.hpp"

int main(void)
{
    Fixed a;

    // multiplication
    std::cout << "Multiplication\n";
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << Fixed(5.05f) << " * " << Fixed(2) << " = " << b << std::endl;

    // division
    std::cout << "\nDivision\n";
    Fixed const c(Fixed(10) / Fixed(2));
    std::cout << Fixed(10) << " / " << Fixed(2) << " = " << c << std::endl;

    // increment & decrement
    std::cout << "\nIncrement & decrement\n";
    int i;
    std::cout << "pre increment\n";
    for (i = 0; i < 3; i++)
        std::cout << ++a << std::endl;
    std::cout << "pre decrement\n";
    for (i = 0; i < 3; i++)
        std::cout << --a << std::endl;
    std::cout << "post increment\n";
    for (i = 0; i < 3; i++)
        std::cout << a++ << std::endl;
    std::cout << "post decrement\n";
    for (i = 0; i < 3; i++)
        std::cout << a-- << std::endl;
    
    // Comparison
    std::cout << "\nComparison\n";
    Fixed const min(2);
    Fixed const max(5);
    Fixed const n(5);
    if (Fixed(n) == Fixed(max))
        std::cout << n.toInt() << " is equal to " << max.toInt() << std::endl;
    if (Fixed(n) != Fixed(min))
        std::cout << n.toInt() << " is different to " << min.toInt() << std::endl;
    if (Fixed(n) <= Fixed(max))
        std::cout << n.toInt() << " is inferior or equal to " << max.toInt() << std::endl;
    if (Fixed(n) >= Fixed(max))
        std::cout << n.toInt() << " is superior or equal to " << max.toInt() << std::endl;
    if (Fixed(min) < Fixed(max))
        std::cout << min.toInt() << " is inferior to " << max.toInt() << std::endl;
    if (Fixed(max) > Fixed(min))
        std::cout << max.toInt() << " is superior to " << min.toInt() << std::endl;
    
    // addition
    std::cout << "\nAddition\n";
    std::cout << n.toInt() << " + " << min.toInt() << " = " << Fixed(Fixed(n) + Fixed(min)) << std::endl;
    // substraction
    std::cout << "\nSubstraction\n";
    std::cout << n.toInt() << " - " << min.toInt() << " = " << Fixed(Fixed(n) - Fixed(min)) << std::endl;

    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::min(a, b) << std::endl;

    return 0;
}

#include "Array.hpp"

int main(void)
{
    std::cout << "-- Creation of an emty array --\n";
    Array   <char>a;

    std::cout << "-- Creation of an array of n elements --\n";
    Array   <int>b(5);
    std::cout << "-- Instanciation of the array of n elements --\n";
    b[0] = 1;
    b[1] = 2;
    b[2] = 3;
    b[3] = 4;
    b[4] = 5;
    std::cout << b << std::endl;

    std::cout << "Size of the empty array, should be 0: " << a.size() << std::endl;
    std::cout << "Size of the array of n elements, should be 5: " << b.size() << std::endl;
    std::cout << std::endl;

    try
    {
        b[10] = 6;
    }
    catch (std::exception& e)
    {
	    std::cout << "Error. This element is out of the limits.\n";
    }

    return 0;
}
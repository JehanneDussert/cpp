// #include "Array.hpp"

// int main(void)
// {
//     std::cout << "-- Creation of an emty array --\n";
//     Array   <char>a;

//     std::cout << "-- Creation of an array of n elements --\n";
//     Array   <int>b(5);
//     std::cout << "-- Instanciation of the array of n elements --\n";
//     b[0] = 1;
//     b[1] = 2;
//     b[2] = 3;
//     b[3] = 4;
//     b[4] = 5;
//     std::cout << b << std::endl;

//     std::cout << "Size of the empty array, should be 0: " << a.size() << std::endl;
//     std::cout << "Size of the array of n elements, should be 5: " << b.size() << std::endl;
//     std::cout << std::endl;

//     try
//     {
//         b[10] = 6;
//     }
//     catch (std::exception& e)
//     {
// 	    std::cout << "Error. This element is out of the limits.\n";
//     }

        //delete [] b;
//     return 0;
// }

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}

#include "Span.hpp"

int main(void)
{
    Span sp = Span(5);
    Span sp1 = Span(0);
    Span sp2 = Span(1);
    Span sp3 = Span(0);
    
    std::cout << "-- Add numbers to span --\n";
    try
    {
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "-- Print shortest span [5 - 3], should return 2: ";
    try
    {
        std::cout << sp.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "-- Print shortest span [17 - 3], should return 14: ";
    try
    {
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "\n-- Try to catch exceptions --\n";
    std::cout << "*Add too much numbers to span:\n";
    try
    {
        sp.addNumber(11);
        sp.addNumber(11);
        sp.addNumber(11);
        sp.addNumber(11);
        sp.addNumber(11);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "*Try to find shortest span in sp1, should catch an exception:\n";
    try
    {
        std::cout << sp1.shortestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    std::cout << "*Try to find longest span in sp2, should catch an exception:\n";
    try
    {
        std::cout << sp2.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}

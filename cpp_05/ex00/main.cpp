#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  a("Lala", 2);
    Bureaucrat  b("Lolo", 149);
    Bureaucrat  c("Lili", 50);

    try
    {
        std::cout << a.getGrade();
        std::cout << std::endl;
        a.increment();
        std::cout << a.getGrade();
        std::cout << std::endl;
        a.increment();
        std::cout << a.getGrade();
        std::cout << std::endl;
        a.increment();
        std::cout << a.getGrade();
        std::cout << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }

    try
    {
        std::cout << b.getGrade();
        std::cout << std::endl;
        b.decrement();
        std::cout << b.getGrade();
        std::cout << std::endl;
        b.decrement();
        std::cout << b.getGrade();
        std::cout << std::endl;
        b.decrement();
        std::cout << b.getGrade();
        std::cout << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }

    b = c;
    try
    {
        std::cout << b.getGrade();
        std::cout << std::endl;
        b.increment();
        std::cout << b.getGrade();
        std::cout << std::endl;
        b.increment();
        std::cout << b.getGrade();
        std::cout << std::endl;
        b.increment();
        std::cout << b.getGrade();
        std::cout << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }

    std::cout << a << b << c;

    return 0;
}
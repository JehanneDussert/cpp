#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  a("Lala", 2);
    Bureaucrat  b("Lolo", 149);
    Bureaucrat  c("Lili", 50);

    try
    {
        std::cout << "A grade : " << a.getGrade();
        std::cout << std::endl;
        a.increment();
        std::cout << "A grade : " << a.getGrade();
        std::cout << std::endl;
        a.increment();
        std::cout << "A grade : " << a.getGrade();
        std::cout << std::endl;
        a.increment();
        std::cout << "A grade : " << a.getGrade();
        std::cout << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }

    try
    {
        std::cout << "B grade : " << b.getGrade();
        std::cout << std::endl;
        b.decrement();
        std::cout << "B grade : " << b.getGrade();
        std::cout << std::endl;
        b.decrement();
        std::cout << "B grade : " << b.getGrade();
        std::cout << std::endl;
        b.decrement();
        std::cout << "B grade : " << b.getGrade();
        std::cout << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }

    b = c;
    std::cout << "B become C\n";

    try
    {
        std::cout << "B grade : " << b.getGrade();
        std::cout << std::endl;
        b.increment();
        std::cout << "B grade : " << b.getGrade();
        std::cout << std::endl;
        b.increment();
        std::cout << "B grade : " << b.getGrade();
        std::cout << std::endl;
        b.increment();
        std::cout << "B grade : " << b.getGrade();
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
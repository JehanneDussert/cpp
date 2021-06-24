#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  a("Lala", 2);
    Bureaucrat  b("Lolo", 149);
    Bureaucrat  c("Lili", 50);

    std::cout << "Try to create a Bureaucrat with\n";
    std::cout << "* too low grade *\n";
    try
    {
        Bureaucrat d("Nono", 158);
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }
    
    std::cout << "* too high grade *\n";
    try
    {
        Bureaucrat d("Nono", 0);
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }
    std::cout <<std::endl;

    std::cout << "Try to increment a Bureaucrat lower than the lowest grade (1)\n";
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

    std::cout << "Try to decrement a Bureaucrat lower than the lowest grade (150)\n";
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

    std::cout << "\nB before copy (name is const): " << b;
    std::cout << "C before copy (name is const): " << c;
    b = c;
    std::cout << "B after copy (name is const): " << b;

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

    std::cout << "\nBureaucrats :\n";
    std::cout << a << b << c;

    return 0;
}
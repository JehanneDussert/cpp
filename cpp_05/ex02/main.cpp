#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat  a("Lala", 2);
    Bureaucrat  b("Lolo", 4);
    Bureaucrat  c("Lili", 50);
    Form        f1("C18", 40, 30);
    Form        f2("B12", 3, 2);

    try
    {
        std::cout << "A grade : " << a.getGrade();
        std::cout << std::endl;
        a.increment();
        std::cout << "A grade : " << a.getGrade();
        std::cout << std::endl;
        f1.beSigned(a);
        f2.beSigned(b);
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }

    try
    {
        std::cout << f1 << f2;
        f2.beSigned(b);
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
        f2.beSigned(b);
        std::cout << f1 << f2;
        std::cout << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }

    c = a;
    std::cout << "C become A\n";

    try
    {
        b.increment();
        std::cout << "B grade : " << b.getGrade();
        std::cout << std::endl;
        b.increment();
        std::cout << "B grade : " << b.getGrade();
        std::cout << std::endl;
        b.increment();
        std::cout << "B grade : " << b.getGrade();
        std::cout << std::endl;
        f2.beSigned(b);
        std::cout << f1 << f2;
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
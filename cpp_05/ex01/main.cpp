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
        std::cout << "\nPrint f1 & f2 forms :\n";
        std::cout << f1 << f2 << std::endl;
        std::cout << b;
        std::cout << "b tries to sign f2 :\n";
        f2.beSigned(b);
        std::cout << "b succeed.\n";
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

    std::cout << "\nf1 before copy (name + grades are const, only sign changes): " << f1.getSign() << std::endl;
    std::cout << "f2 before copy (name + grades are const, only sign changes): " << f2.getSign() << std::endl;
    f1 = f2;
    std::cout << "f1 become f2\n";
    std::cout << "f1 after copy (name + grades are const, only sign changes): " << f1.getSign() << std::endl;

    std::cout << std::endl;
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
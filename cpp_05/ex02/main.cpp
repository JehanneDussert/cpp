#include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

int main(void)
{
    Bureaucrat              a("Lala", 2);
    Bureaucrat              b("Lolo", 4);
    Bureaucrat              c("Lili", 149);
    ShrubberyCreationForm   f1("maison");
    ShrubberyCreationForm   f1bis("maison");
    PresidentialPardonForm  f2("coucou");
    RobotomyRequestForm     f3("robot");


    std::cout << "*ShrubberyCreationForm test*\n";
    std::cout << std::endl;
    try
    {
        f1.beSigned(a);
        f1.execute(a);
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }

    try
    {
        f1bis.execute(c);
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout << "*PresidentialPardonForm*\n";
    std::cout << std::endl;
    try
    {
        f2.beSigned(a);
        f2.execute(a);
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }

    try
    {
        f2.beSigned(c);
        f2.execute(c);
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }
    std::cout << std::endl;

    std::cout << "*RobotomyRequestForm*\n";
    std::cout << std::endl;
    try
    {
        f3.beSigned(a);
        f3.execute(a);
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }

    try
    {
        f3.beSigned(c);
        f3.execute(c);
    }
    catch (std::exception& e)
    {
        std::cout << e.what();
        std::cout << std::endl;
    }

    return 0;
}
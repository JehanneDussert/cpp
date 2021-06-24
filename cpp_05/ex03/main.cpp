#include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "Intern.hpp"

int main(void)
{
    Intern someRandomIntern;
    Form* rrf;
    Form* fake;

    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    fake = someRandomIntern.makeForm("unknown type", "Bobo");

    delete rrf;
    delete fake;
    
    return 0;
}
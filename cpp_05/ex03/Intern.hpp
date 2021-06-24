#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	private:
		std::string	_tab[3];
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);
		Intern &operator=(Intern const &rhs);
		Form	*makeForm(std::string name, std::string target);
		std::string	getTab(int const idx) const;
};

Form	*newRobotomyRequest(std::string target);
Form	*newPresidentialRequest(std::string target);
Form	*newShrubberyRequest(std::string target);

//std::ostream    &operator<<(std::ostream &o, Intern const &rhs);

#endif

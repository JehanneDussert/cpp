#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>

# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	private:
	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs);

#endif

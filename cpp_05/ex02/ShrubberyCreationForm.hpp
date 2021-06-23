#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>

# include "Form.hpp"

class	ShrubberyCreationForm : public Form
{
	private:
		ShrubberyCreationForm(void);
		std::string	_target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm(void);
		std::string	getTarget(void) const;
		virtual void	execute(Bureaucrat const & executor) const;
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, ShrubberyCreationForm const &rhs);

# define TREES \
"               ,@@@@@@@,					" << std::endl <<		\
"       ,,,.   ,@@@@@@/@@,  .oo8888o.		" << std::endl <<		\
"    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o		" << std::endl <<		\
"   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'		" << std::endl <<		\
"   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'		" << std::endl <<		\
"   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'		" << std::endl <<		\
"   `&%\\ ` /%&'    |.|        \\ '|8'		" << std::endl <<		\
"       |o|        | |         | |			" << std::endl <<		\
"       |.|        | |         | |			" << std::endl <<		\
"    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_	" << std::endl

# define TREE \
"     ccee88oo				" << std::endl <<		\
"  C8O8O8Q8PoOb o8oo		" << std::endl <<		\
" dOB69QO8PdUOpugoO9bD		" << std::endl <<		\
"CgggbU8OU qOp qOdoUOdcb	" << std::endl <<		\
"    6OuU  /p u gcoUodpP	" << std::endl <<		\
"      \\\\//  /douUP		" << std::endl <<		\
"        \\\\////			" << std::endl <<		\
"         |||/\\				" << std::endl <<		\
"         |||\\/				" << std::endl <<		\
"         |||||				" << std::endl <<		\
"   .....//||||\\....		" << std::endl

#endif

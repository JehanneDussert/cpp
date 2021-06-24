#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>

# include "Form.hpp"

class	PresidentialPardonForm : public Form
{
	private:
		PresidentialPardonForm(void);
		std::string	_target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm(void);
		std::string	getTarget(void) const;
		virtual void	execute(Bureaucrat const & executor) const;
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
};

#endif

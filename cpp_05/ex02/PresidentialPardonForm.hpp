#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>

class	PresidentialPardonForm
{
	private:
	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm(void);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &rhs);
};

//std::ostream    &operator<<(std::ostream &o, PresidentialPardonForm const &rhs);

#endif

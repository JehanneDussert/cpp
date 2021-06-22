#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Form;

class	Bureaucrat
{
	private:
		std::string const	_name;
		unsigned int		_grade;
		Bureaucrat(void);
	public:
		Bureaucrat(std::string name, unsigned int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);
		Bureaucrat &operator=(Bureaucrat const &rhs);
		unsigned int	getGrade(void) const;
		std::string		getName(void) const;
		void			increment();
		void			decrement();
		void			signForm(Form& f);
		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &rhs);

#endif

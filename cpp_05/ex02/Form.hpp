#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class	Form
{
	private:
		Form(void);
		std::string const	_name;
		bool				_sign;
		unsigned int const	_gradeSign;
		unsigned int const	_gradeExec;
	public:
		Form(std::string name, unsigned int gradeSign, unsigned int gradeExec);
		Form(Form const &src);
		~Form(void);
		Form &operator=(Form const &rhs);
		std::string		getName(void) const;
		unsigned int	getGradeSign(void) const;
		unsigned int	getGradeExec(void) const;
		bool			getSign(void) const;
		void			beSigned(Bureaucrat& b);
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

std::ostream    &operator<<(std::ostream &o, Form const &rhs);

#endif

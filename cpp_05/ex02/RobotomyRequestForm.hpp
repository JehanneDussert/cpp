#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cmath>

# include "Form.hpp"

class	RobotomyRequestForm : public Form
{
	private:
		RobotomyRequestForm(void);
		std::string	_target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm(void);
		void robotomized(std::string target) const;
		std::string	getTarget(void) const;
		virtual void	execute(Bureaucrat const & executor) const;
		RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);
};

#endif

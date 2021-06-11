#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>

class	Peon
{
	private:
		std::string	_name;
	public:
		Peon(void);
		Peon(Peon const &src);
		Peon(std::string name);
		~Peon(void);
		Peon &operator=(Peon const &rhs);
		void	getPolymorphed(void) const;
};

//std::ostream    &operator<<(std::ostream &o, Peon const &rhs);

#endif

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <iostream>

class	Victim
{
	private:
		std::string	_name;
	public:
		Victim(void);
		Victim(Victim const &src);
		Victim(std::string name);
		~Victim(void);
		Victim &operator=(Victim const &rhs);
		void	introduce(void);
		void	getPolymorphed(void) const;
};

//std::ostream    &operator<<(std::ostream &o, Victim const &rhs);

#endif

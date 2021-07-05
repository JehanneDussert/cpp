#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:
	public:
		MutantStack(void);
		MutantStack(MutantStack const &src);
		~MutantStack(void);
		MutantStack &operator=(MutantStack const &rhs);
		// begin, end, it
};

//std::ostream    &operator<<(std::ostream &o, MutantStack const &rhs);

#endif

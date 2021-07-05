#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <iterator>
#include <list>

template <typename T>
class	MutantStack : public std::stack<T>
{
	private:
	public:
		MutantStack(void);
		MutantStack(MutantStack const &src);
		~MutantStack(void);
		MutantStack &operator=(MutantStack const &rhs);
		typedef typename	std::stack<T>::container_type::iterator			iterator;
		typedef typename	std::stack<T>::container_type::const_iterator	const_iterator;
		iterator			begin(void) { return this->c.begin(); };
		iterator			end(void) { return this->c.end(); };
};

template <typename T>
MutantStack<T>::MutantStack(void) : std::stack<T>()
{
	return ;
}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &src) : std::stack<T>(src)
{
	return ;
}

template <typename T>
MutantStack<T>::~MutantStack(void)
{
	return ;
}

template <typename T>
MutantStack<T>	&MutantStack<T>::operator=(MutantStack const &rhs)
{
	this->c = rhs.c;

	return *this;
}

#endif

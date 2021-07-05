#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>

class	Span
{
	private:
		unsigned int		_size;
		std::vector<int>	_tab;
		Span(void);
	public:
		Span(unsigned int);
		Span(Span const &src);
		~Span(void);
		Span &operator=(Span const &rhs);
		void addNumber(int);
		unsigned int		getLen(void) const;
		std::vector<int>	getTab(void) const;
		int shortestSpan(void);
		int longestSpan(void);
		unsigned int getLen(void);

		class	TabException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class	SizeException : public std::exception
		{
			public:
				const char* what() const throw();
		};
};



//std::ostream    &operator<<(std::ostream &o, Span const &rhs);

#endif

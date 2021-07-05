#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <list>
# include <algorithm>
# include <exception>
# include <string>

class	NoNeedleException : public std::exception
{
	public:
		const char* what() const throw();
};

const char* NoNeedleException::what() const throw()
{
    return "Error. No needle found in haystack.\n";
}

template<typename T>
int easyfind(T const &haystack, int const needle)
{
    if (std::find(haystack.begin(), haystack.end(), needle) != haystack.end())
        return needle;
    throw NoNeedleException();
}

#endif
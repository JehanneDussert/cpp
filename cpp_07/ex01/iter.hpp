#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T>
void print(T const & element)
{
	std::cout << "My element: " << element << std::endl;
}

template< typename T>
void iter(T const *array, int const & len, void (*f)(T const & element))
{
	for (int i = 0; i < len; i++)
		(*f)(array[i]);
}

#endif
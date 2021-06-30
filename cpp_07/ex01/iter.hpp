#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T>
T const iter(T const & x, T const & y)
{
	return (x > y ? x : y);
}

#endif
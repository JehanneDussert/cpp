#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class   Array
{
    private:
        T               *_arr;
        unsigned int    _len;
    public:
        Array(void);
        Array(unsigned int);
        Array(Array const & src);
        ~Array(void);
		Array &operator=(Array const &rhs);
		const T &operator[](unsigned int idx) const;
		T &operator[](unsigned int idx);
		unsigned int	size(void) const;
};

template< typename T>
std::ostream    &operator<<(std::ostream &o, Array<T> const &rhs);

template< typename T>
Array<T>::Array(void) : _arr(), _len(0)
{
	return ;
}

template< typename T>
Array<T>::Array(unsigned int n) : _arr(new T[n]), _len(n)
{
	return ;
}

template< typename T>
Array<T>::Array(Array const & src) : _arr(src._arr), _len(src._len)
{
	return ;
}

template< typename T>
Array<T>::~Array(void)
{
	delete [] _arr;
	return ;
}

template< typename T>
unsigned int     Array<T>::size(void) const
{
	return this->_len;
}

template< typename T>
Array<T> &Array<T>::operator=(Array const &rhs)
{
    this->_len = rhs.size();
	_arr = new T[_len];
	for (unsigned int i = 0; i < _len; i++)
		_arr[i] = rhs[i];
	return (*this);
}

template< typename T>
const T &Array<T>::operator[](unsigned int idx) const
{
    if (idx > _len)
		throw std::exception();
	return _arr[idx];
}

template< typename T>
T &Array<T>::operator[](unsigned int idx)
{
    if (idx > _len)
		throw std::exception();
	return _arr[idx];
}

template< typename T>
std::ostream    &operator<<(std::ostream &o, Array<T> const &rhs)
{
	for (unsigned int i = 0; i < rhs.size(); i++)
		o << "Element [" << i << "] is " << rhs[i] << std::endl;
	return o;
}

#endif
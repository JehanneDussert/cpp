#include "Span.hpp"

Span::Span(unsigned int N) : _size(N)
{
	return ;
}

Span::Span(Span const &src)
{
	*this = src;

	return ;
}

Span::~Span(void)
{
	return ;
}

unsigned int	Span::getLen(void) const
{
	return _size;
}

std::vector<int>	Span::getTab(void) const
{
	return _tab;
}

Span	&Span::operator=(Span const &rhs)
{
	_size = rhs.getLen();
	_tab = rhs.getTab();

	return *this;
}

const char* Span::TabException::what() const throw()
{
	return "Error. Tab is already full.";
}

const char* Span::SizeException::what() const throw()
{
	return "Error. Tab has not enough elements.";
}

void Span::addNumber(int n)
{
	if (_tab.size() >= _size)
		throw TabException();
	_tab.push_back(n);
}

unsigned int Span::getLen(void)
{
	unsigned int len = 0;
	for (unsigned int i = 0; this->_tab[i] && i < _size; i++)
		len++;
	return len;
}

int Span::shortestSpan(void)
{
	std::vector<int>	copy = _tab;
	int					ret = INT_MAX;

	if (_size < 2 || this->getLen() < 2)
		throw SizeException();
	std::sort(copy.begin(), copy.end());
	for (unsigned int i = 0; i < this->getLen() - 1; i++)
		if (copy[i + 1] - copy[i] < ret)
			ret = copy[i + 1] - copy[i];
	return ret;
}

int Span::longestSpan(void)
{
	std::vector<int>	copy = _tab;

	if (_size < 2 || this->getLen() < 2)
		throw SizeException();
	std::sort(copy.begin(), copy.end());
	return copy[getLen() - 1] - copy[0];
}

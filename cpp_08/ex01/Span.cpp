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
	int ret = INT_MAX;
	std::sort(std::begin(this->_tab), std::end(this->_tab));
	for (unsigned int i = 0; i < this->getLen() - 1; i++)
		if (_tab[i + 1] - _tab[i] < ret)
			ret = _tab[i + 1] - _tab[i];
	return ret;
}

int Span::longestSpan(void)
{
	if (this->getLen() < 2)
		throw SizeException();
	std::sort(std::begin(this->_tab), std::end(this->_tab));
	return this->_tab[getLen() - 1] - this->_tab[0];
}

/*std::ostream    &operator<<(std::ostream &o, Span const &rhs)
{
	return o;
}*/

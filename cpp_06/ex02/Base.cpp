#include "Base.hpp"

Base::~Base(void)
{
	return ;
}

Base *	generate(void)
{
	srand(time(0));
	int r = rand() % 3;

	if (r == 0)
		return new A;
	else if (r == 1)
		return new B;
	return new C;
}

void	identify(Base* p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "This class is an A class.\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "This class is a B class.\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "This class is a C class.\n";
}

void	identify(Base& p)
{
	Base test;

	try
	{
		test = dynamic_cast<A &>(p);
		std::cout << "This class is an A class.\n";
	}
	catch (std::bad_cast &bc)
	{
		try
		{
			test = dynamic_cast<B &>(p);
			std::cout << "This class is a B class.\n";
		}
		catch (std::bad_cast &bc)
		{
			std::cout << "This class is a C class.\n";
		}
	}
}

#include <stdio.h>
#include <iostream>

namespace	Foo 
{
	int		gl_var = 3;
	int		f(void){return 4;}
}

namespace	Bar
{
	int		gl_var = 5;
	int		f(void){return 6;}
}

namespace Muf = Bar;

// :: -> operateur de resolution de portee
// permet de dire au sein du namespace Foo je veux acceder a gl_var puis a fonction f()

int main	(void)
{
	char	buf[512];
	// printf("Foo ::gl_var: %d\n", Foo::gl_var);
	// printf("Foo ::f(): %d\n\n", Foo::f());

	// printf("Bar ::gl_var: %d\n", Bar::gl_var);
	// printf("Bar ::f(): %d\n", Bar::f());
	std::cout << "Hello world" << std::endl;
	std::cout << "Please enter a word : ";
	std::cin >> buf;
	std::cout << "Your word : " << buf << std::endl;
	return 0;
}

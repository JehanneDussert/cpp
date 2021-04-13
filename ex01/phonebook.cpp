#include <iostream>
#include <ctype.h>

int main	(int argc, char **argv)
{
	int i;
	int j;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    for (j = 1; j < argc ; j++)
	{
        for(i = 0; argv[j][i] != '\0'; i++)
		{
			argv[j][i] = toupper(argv[j][i]);
			std::cout << argv[j][i];
		}
	}
	std::cout << '\n';
	return 0;
}
#include <stdio.h>
#include <iostream>
#include <ctype.h>
#include <string.h>

int main	(int argc, char **argv)
{
	int i;
	int j;
	int k = 1;
	int n;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (j = 1; j < argc ; j++)
	{
		for (n = strlen(argv[j]) - 1; n >= 0 && argv[j][n] == ' '; n--)
			k--;
		if (k > 1)
			std::cout << ' ';
		for(i = 0; i <= n; i++){
			argv[j][i] = toupper(argv[j][i]);
			std::cout << argv[j][i];
		}
		k++;
	}
	std::cout << '\n';
	return 0;
}
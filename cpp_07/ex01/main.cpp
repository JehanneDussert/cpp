#include "iter.hpp"

int main(void)
{
    int     tab1[] = {0, 42, 10, -8, 4};
    char    tab2[] = {'c', 'o', 'u', 'c', 'o', 'u'};

    std::cout << "-- Try with an array of int --\n";
    iter(tab1, 5, print);
    std::cout << "-- Try with an array of char --\n";
    iter(tab2, 6, print);

    return 0;
}
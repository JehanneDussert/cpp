#include "easyfind.hpp"

int main(void)
{
    int ret;

    std::cout << "-- Vector --\n";
    std::vector<int> tab1;

    tab1.push_back(42);
    tab1.push_back(1);
    tab1.push_back(109);
    tab1.push_back(0);
    tab1.push_back(726);
    tab1.push_back(-194);
    tab1.push_back(6);
    tab1.push_back(2);

    try
    {
        ret = easyfind(tab1, 726);
        std::cout << "Expected 726 | Return: " << ret << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what();
    }
    try
    {
        ret = easyfind(tab1, 666);
        std::cout << "Expected 666 | Return: " << ret << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what();
    }

    std::cout << "\n-- List --\n";
    std::list<int> tab2;

    tab2.push_back(42);
    tab2.push_back(1);
    tab2.push_back(109);
    tab2.push_back(0);
    tab2.push_back(726);
    tab2.push_back(-194);
    tab2.push_back(6);
    tab2.push_back(2);

    try
    {
        ret = easyfind(tab2, 726);
        std::cout << "Expected 726 | Return: " << ret << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what();
    }
    try
    {
        ret = easyfind(tab2, 666);
        std::cout << "Expected 666 | Return: " << ret << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what();
    }

    return 0;
}
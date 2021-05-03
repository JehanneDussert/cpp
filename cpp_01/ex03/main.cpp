#include "ZombieHorde.hpp"
#include <random>

int main(void)
{
    std::srand(time(0));
    std::random_device rd;
    std::default_random_engine eng(rd());
    std::uniform_int_distribution<int> distr(10, 50);
    int n = distr(eng);
    std::cout << "\n\nA horde of " << n << " hungry zombies is heading our way!\n\n";

    ZombieHorde z(n);
    return 0;
}

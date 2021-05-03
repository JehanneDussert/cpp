#include "Human.hpp"

int main(void)
{
    Human   bob;
    std::cout << "Brain address : ";
    std::cout << bob.identify() << std::endl;
    std::cout << "Human address : ";
    std::cout << bob.getBrain().identify() << std::endl;
}

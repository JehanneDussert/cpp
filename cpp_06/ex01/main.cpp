#include "serialize.hpp"

int main(void)
{
    Data        d;
    Data        *new_d;
    uintptr_t   raw;
    d.str = "coucou ?";

    std::cout << "Content before: " << d.str << std::endl;
    raw = serialize(&d);
    new_d = deserialize(raw);
    
    std::cout << new_d << std::endl;
    std::cout << &d << std::endl;
    std::cout << "Content after: " << new_d->str << std::endl;
    if (new_d == &d)
        std::cout << "Identical\n";
    else
        std::cout << "Error.\n";

    return 0;
}

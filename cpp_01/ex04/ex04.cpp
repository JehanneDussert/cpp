#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::cout << str << std::endl;
    std::string* strPtr = &str;
    std::cout << *strPtr << std::endl;
    std::string& strRef = str;
    std::cout << strRef << std::endl;
}
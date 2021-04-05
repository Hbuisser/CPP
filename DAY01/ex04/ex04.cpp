#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *pointer;
    std::string &reference = brain;

    pointer = &brain;
    std::cout << "Pointer : " << *pointer << std::endl;
    std::cout << "Reference : " << reference << std::endl;
    return (0);
}
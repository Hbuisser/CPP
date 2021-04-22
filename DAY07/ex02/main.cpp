#include <iostream>
#include "array.hpp"

int main()
{
    Array<char> a;
    Array<char> b(3);

    try
    {
        std::cout << "Size a: " << a.getLength() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "Size b: " << b.getLength() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return (0);
}
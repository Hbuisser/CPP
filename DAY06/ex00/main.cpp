#include <iostream>

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        Data c;
        c.convert(argv[1]);
    }
    else
        std::cout << "Not enough arguments" << std::endl;
}
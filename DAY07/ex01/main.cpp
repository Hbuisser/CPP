#include <iostream>
#include "iter.hpp"

int main()
{
    int array[] = {1, 2, 19, 42};
    iter(array, 4, show);

    std::string array2[] = {"Pierre", "Evrard", "Louis"};
    iter(array2, 3, show);
    return (0);
}
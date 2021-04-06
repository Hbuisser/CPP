#include <iostream>
#include "Brain.hpp"
#include "Human.hpp"

// int main()
// {
//     Brain *newBrain = NULL;

//     newBrain->identify();
//     std::cout << "Address : " << newBrain;
//     return (0);
// }

int main()
{
    Human bob;
    std::cout << bob.identify() << std::endl;
    std::cout << bob.getBrain().identify() << std::endl;
}
#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
    std::cout << "========= Test ZombieHord class :" << std::endl;
    ZombieHorde horde(10);
    horde.announce();
    return (0);
}
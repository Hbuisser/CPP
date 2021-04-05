#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main()
{
    std::cout << "========= Test ZombieHord class :" << std::endl;
    ZombieHorde horde = ZombieHorde(10);
    horde.announce();
    return (0);
}
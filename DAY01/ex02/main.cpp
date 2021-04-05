#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    Zombie      momo = Zombie("Momo", "Moche");
    ZombieEvent randomBill;
    ZombieEvent bill;

    std::cout << "========= Test for class Zombie :" << std::endl;
    momo.announce();

    std::cout << "========= Test for class ZombieEvent :" << std::endl;
    bill.setZombieType("Dangerous");
    bill.newZombie("Bill");
    bill.announce();

    std::cout << "========= Test for class ZombieEvent (random) :" << std::endl;
    randomBill.randomChump();

    return (0);
}
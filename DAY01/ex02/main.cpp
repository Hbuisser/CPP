#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main()
{
    std::cout << "========= Test for class Zombie :" << std::endl;
    Zombie momo = Zombie("Momo", "Moche");
    Zombie mimi = Zombie("Mimi");
    momo.advert();
    mimi.advert();

    std::cout << "========= Test for class ZombieEvent :" << std::endl;
    Zombie *mama;
    ZombieEvent event;
    mama = event.newZombie("Mama");
    event.setZombieType(*mama, "Dangerous");
    mama->advert();
    delete mama;

    std::cout << "========= Test for class ZombieEvent (random) :" << std::endl;
    ZombieEvent random;
    random.randomChump();

    return (0);
}
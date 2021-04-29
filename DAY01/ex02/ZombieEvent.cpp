#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
}

ZombieEvent::~ZombieEvent()
{
}

void ZombieEvent::announce(Zombie z) const
{
    z.advert();
}

void ZombieEvent::setZombieType(Zombie &m, std::string type)
{
    m.setType(type);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    return (new Zombie(name, ""));
}

std::string randomName()
{
    int randNum;
    std::string names[5] = {"MassiveMonster", "BiggyWow", "Bill", "Joe", "TheHuglyOne"};
    std::string name;

    srand(time(NULL)); // seed for the random number generator.
    randNum = (rand() % 4) + 1; // gets a random number between 1, and 5.
    name = names[randNum];
    return (name);
}

Zombie        ZombieEvent::randomChump()
{
    std::string name = randomName();
    Zombie randomZombie(name, "Dark");

    randomZombie.advert();
    return (randomZombie);
}

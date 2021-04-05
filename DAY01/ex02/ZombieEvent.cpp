#include "Zombie.hpp"
#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
    m_name = "";
    m_type = "";
}

ZombieEvent::~ZombieEvent()
{
}

void        ZombieEvent::announce()
{
    std::cout << m_name << " " << m_type << " Braiiiiiiiinnnssss ....." << std::endl;
}

void        ZombieEvent::setZombieType(std::string type)
{
    m_type = type;
}

Zombie*      ZombieEvent::newZombie(std::string name)
{
    m_name = name;

    Zombie *newZombie = new Zombie;
    return (newZombie);
}

std::string  randomName()
{
    int randNum;
    std::string names[5] = {"MassiveMonster", "BiggyWow", "Bill", "Joe", "TheHuglyOne"};
    std::string name;

    srand(time(NULL)); // seed for the random number generator.
    randNum = rand() % 5 + 1; // gets a random number between 1, and 5.
    name = names[randNum];
    return (name);
}

Zombie        ZombieEvent::randomChump()
{
    std::string name = randomName();
    Zombie randomZombie(name, "Dark");

    randomZombie.announce();
    return (randomZombie);
}

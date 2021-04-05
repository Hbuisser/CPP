#include "Zombie.hpp"
#include "ZombieHorde.hpp"

Zombie::Zombie()
{
}

void Zombie::ZombieSet(std::string name, std::string type)
{
    m_name = name;
    m_type = type;
}

Zombie::~Zombie()
{
}

void Zombie::announce()
{
    std::cout << m_name << " " << m_type << " Braiiiiiiiinnnssss ....." << std::endl;
}
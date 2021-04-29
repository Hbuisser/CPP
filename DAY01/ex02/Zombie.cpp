#include "Zombie.hpp"
#include "ZombieEvent.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, std::string type) : m_name(name), m_type(type)
{
}

Zombie::Zombie(std::string name) : m_name(name), m_type("Newone")
{
}

Zombie::~Zombie()
{
}

void Zombie::setType(std::string type)
{
    this->m_type = type;
}

void Zombie::advert() const
{
    std::cout << m_name << " " << m_type << " Braiiiiiiiinnnssss ....." << std::endl;
}
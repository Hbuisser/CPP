#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>
#include <cstdlib>

#include "Zombie.hpp"

class ZombieEvent
{
    private:
    
    public:
        std::string     m_type;
        std::string     m_name;
        ZombieEvent();
        ~ZombieEvent();
    
        void            setZombieType(std::string type);
        Zombie*         newZombie(std::string name);
        Zombie          randomChump();
        void            announce();
};

#endif
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
    public:
        ZombieEvent();
        ~ZombieEvent();
    
        void            setZombieType(Zombie &m, std::string type);
        Zombie          *newZombie(std::string name);
        Zombie          randomChump();
        void            announce(Zombie z) const;
    
    private:

};

#endif
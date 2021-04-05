#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>
#include <cstdlib>

class Zombie
{
    private:
    
    public:
        std::string     m_name;
        std::string     m_type;
        Zombie();
        void            ZombieSet(std::string name, std::string type);
        void            announce();
        ~Zombie();
};

#endif
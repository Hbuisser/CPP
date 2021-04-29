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
        std::string     m_name;
        std::string     m_type;
    
    public:
        Zombie();
        Zombie(std::string name, std::string type);
        Zombie(std::string name);
        ~Zombie();
        void advert() const;
        void setType(std::string type);
};

#endif
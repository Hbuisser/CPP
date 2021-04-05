#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <limits>
#include <cstdlib>
#include <unistd.h> 

#include "Zombie.hpp"

class ZombieHorde
{
    public:
        ZombieHorde(int n);
        ~ZombieHorde();
        void announce();

    private:
        int     m_n;
        Zombie  *m_horde;
};

#endif
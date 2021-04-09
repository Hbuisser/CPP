#include <iostream>
#include <unistd.h>

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    std::cout << robert << jim << joe;
    robert.polymorph(jim);
    robert.polymorph(joe);
    return 0;

    // std::cout << "__________Sorcerer and Victim class test___________" << std::endl;
    // Sorcerer guy("Guy", "Grand Sorcier");
    // guy.announce();
    // Victim albert("Albert");
    // albert.announce();

    // std::cout << "__________Polymorph test___________" << std::endl;
    // guy.polymorph(albert);

    // std::cout << "__________End of the program : dead of everybody___________" << std::endl;

    //return (0);
}
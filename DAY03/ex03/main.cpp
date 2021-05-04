#include <iostream>
#include <unistd.h>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    std::cout << "___________TEST NinjaTrap_____________" << std::endl;
    ClapTrap starWars("--ClapTrap--");
    FragTrap sith2("--FragTrap--");
    ScavTrap jedi2("--ScavTrap--");
    NinjaTrap ninja("--NinjaTrap--");

    ninja.rangedAttack("Obi One");
    ninja.meleeAttack("Yoda");
    ninja.takeDamage(110);
    ninja.beRepaired(110);
    ninja.takeDamage(4);
    ninja.takeDamage(90);
    ninja.ninjaShoebox(ninja);
    ninja.ninjaShoebox(sith2);
    ninja.ninjaShoebox(jedi2);
    ninja.ninjaShoebox(starWars);

    return (0);
}
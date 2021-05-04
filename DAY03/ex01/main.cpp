#include <iostream>
#include <unistd.h>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap jedi("Anakin");

    jedi.rangedAttack("Obi One");
    jedi.meleeAttack("Yoda");
    jedi.takeDamage(110);
    jedi.beRepaired(110);
    jedi.takeDamage(4);
    jedi.takeDamage(90);
    jedi.challengeNewcomer();
    sleep(1);
    jedi.challengeNewcomer();
    return (0);
}
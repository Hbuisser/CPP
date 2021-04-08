#include <iostream>
#include <unistd.h>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap jedi("Anakin");

    jedi.getHitPoints();
    jedi.rangedAttack("Obi One");
    jedi.meleeAttack("Yoda");
    jedi.takeDamage(110);

    jedi.getHitPoints();
    jedi.beRepaired(110);
    jedi.getHitPoints();

    jedi.takeDamage(4);
    jedi.getHitPoints();
    jedi.takeDamage(90);
    jedi.getHitPoints();

    jedi.challengeNewcomer();
    sleep(1);
    jedi.challengeNewcomer();
    return (0);
}
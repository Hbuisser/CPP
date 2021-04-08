#include <iostream>
#include <unistd.h>

#include "FragTrap.hpp"

int main(void)
{
    FragTrap jedi("Anakin");

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

    jedi.vaulthunter_dot_exe("Darth Sidious");
    sleep(1);
    jedi.getEnergyPoints();
    jedi.vaulthunter_dot_exe("Mass Windu");
    sleep(1);
    jedi.getEnergyPoints();
    jedi.vaulthunter_dot_exe("Obi One");
    sleep(1);
    jedi.getEnergyPoints();
    jedi.vaulthunter_dot_exe("Dooku");
    sleep(1);
    jedi.getEnergyPoints();
    jedi.vaulthunter_dot_exe("Darth Maul");
    return (0);
} 
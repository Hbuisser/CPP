#include <iostream>
#include <unistd.h>

#include "FragTrap.hpp"

int main(void)
{
    FragTrap jedi("Anakin");

    // ==========> 100
    jedi.getHitPoints();
    jedi.rangedAttack("Obi One");
    jedi.meleeAttack("Yoda");
    jedi.takeDamage(110);
    // ==========> 0
    jedi.getHitPoints();
    jedi.beRepaired(110);
    // ==========> 100
    jedi.getHitPoints();
    jedi.takeDamage(4);
    // ==========> 100
    jedi.getHitPoints();
    jedi.takeDamage(90);
    // ==========> 15 (100 - 90 + 5 grace à l'armure)
    jedi.getHitPoints();
    jedi.vaulthunter_dot_exe("Darth Sidious");
    sleep(1);
    // ==========> 75 (100 - 25)
    jedi.getEnergyPoints();
    jedi.vaulthunter_dot_exe("Mass Windu");
    sleep(1);
    // ==========> 50
    jedi.getEnergyPoints();
    jedi.vaulthunter_dot_exe("Obi One");
    sleep(1);
    // ==========> 25
    jedi.getEnergyPoints();
    jedi.vaulthunter_dot_exe("Dooku");
    sleep(1);
    // ==========> 0
    jedi.getEnergyPoints();
    jedi.vaulthunter_dot_exe("Darth Maul");
    return (0);
} 
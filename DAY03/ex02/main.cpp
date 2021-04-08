#include <iostream>
#include <unistd.h>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "___________TEST ScavTrap_____________" << std::endl;
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

    std::cout << "___________TEST FragTrap_____________" << std::endl;
    FragTrap sith("Darth Vador");

    sith.getHitPoints();
    sith.rangedAttack("Obi One");
    sith.meleeAttack("Yoda");
    sith.takeDamage(110);

    sith.getHitPoints();
    sith.beRepaired(110);
    sith.getHitPoints();

    sith.takeDamage(4);
    sith.getHitPoints();
    sith.takeDamage(90);
    sith.getHitPoints();

    sith.vaulthunter_dot_exe("Darth Sidious");
    sleep(1);
    sith.getEnergyPoints();
    sith.vaulthunter_dot_exe("Mass Windu");
    sleep(1);
    sith.getEnergyPoints();
    sith.vaulthunter_dot_exe("Obi One");
    sleep(1);
    sith.getEnergyPoints();
    sith.vaulthunter_dot_exe("Dooku");
    sleep(1);
    sith.getEnergyPoints();
    sith.vaulthunter_dot_exe("Darth Maul");

    return (0);
}
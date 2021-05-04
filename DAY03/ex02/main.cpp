#include <iostream>
#include <unistd.h>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "___________TEST ScavTrap_____________" << std::endl;
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

    std::cout << "___________TEST FragTrap_____________" << std::endl;
    FragTrap sith("Darth Vador");

    sith.rangedAttack("Obi One");
    sith.meleeAttack("Yoda");
    sith.takeDamage(110);
    sith.beRepaired(110);
    sith.takeDamage(4);
    sith.takeDamage(90);
    sith.vaulthunter_dot_exe("Darth Sidious");
    sleep(1);
    sith.vaulthunter_dot_exe("Mass Windu");
    sleep(1);
    sith.vaulthunter_dot_exe("Obi One");
    sleep(1);
    sith.vaulthunter_dot_exe("Dooku");
    sleep(1);
    sith.vaulthunter_dot_exe("Darth Maul");

    return (0);
}
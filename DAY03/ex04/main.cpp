#include <iostream>
#include <unistd.h>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp" 

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

    std::cout << "___________TEST NinjaTrap_____________" << std::endl;
    ClapTrap starWars("--ClapTrap--");
    FragTrap sith2("--FragTrap--");
    ScavTrap jedi2("--ScavTrap--");
    NinjaTrap ninja("--NinjaTrap--");

    ninja.getHitPoints();
    ninja.rangedAttack("Obi One");
    ninja.meleeAttack("Yoda");
    ninja.takeDamage(110);

    ninja.getHitPoints();
    ninja.beRepaired(110);
    ninja.getHitPoints();

    ninja.takeDamage(4);
    ninja.getHitPoints();
    ninja.takeDamage(90);
    ninja.getHitPoints();

    ninja.ninjaShoebox(ninja);
    ninja.ninjaShoebox(sith2);
    ninja.ninjaShoebox(jedi2);
    ninja.ninjaShoebox(starWars);

    std::cout << "___________TEST SuperTrap_____________" << std::endl;
    SuperTrap super("--Super--");
    ClapTrap starWarsSuper("--ClapTrapSuper--");
    FragTrap sithSuper("--FragTrapSuper--");
    ScavTrap jediSuper("--ScavTrapSuper--");
    NinjaTrap ninjaSuper("--NinjaTrapSuper--");

    super.getHitPoints();
    super.rangedAttack("Obi One");
    super.meleeAttack("Yoda");
    super.takeDamage(110);

    super.getHitPoints();
    super.beRepaired(110);
    super.getHitPoints();

    super.takeDamage(4);
    super.getHitPoints();
    super.takeDamage(90);
    super.getHitPoints();

    super.ninjaShoebox(ninjaSuper);
    super.ninjaShoebox(sithSuper);
    super.ninjaShoebox(jediSuper);
    super.ninjaShoebox(starWarsSuper);

    return (0);
}
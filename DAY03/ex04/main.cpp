#include <iostream>
#include <unistd.h>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp" 

int main(void)
{
    std::cout << "___________TEST SuperTrap_____________" << std::endl;
    SuperTrap super("--Super--");
    ClapTrap starWarsSuper("--ClapTrapSuper--");
    FragTrap sithSuper("--FragTrapSuper--");
    ScavTrap jediSuper("--ScavTrapSuper--");
    NinjaTrap ninjaSuper("--NinjaTrapSuper--");

    super.rangedAttack("Obi One");
    super.meleeAttack("Yoda");
    super.takeDamage(110);
    super.beRepaired(110);
    super.takeDamage(4);
    super.takeDamage(90);
    super.ninjaShoebox(ninjaSuper);
    super.ninjaShoebox(sithSuper);
    super.ninjaShoebox(jediSuper);
    super.ninjaShoebox(starWarsSuper);

    return (0);
}
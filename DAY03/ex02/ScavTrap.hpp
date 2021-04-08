
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include <string>

# include "FragTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& copy);
		~ScavTrap();
		ScavTrap& operator=(ScavTrap const& copy);
		void getHitPoints();
		void getEnergyPoints();
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void challengeNewcomer();

	private:

};

#endif

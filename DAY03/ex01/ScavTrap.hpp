
#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

# include <iostream>
# include <string>

# include "FragTrap.hpp"

class ScavTrap : FragTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const& copy);
		~ScavTrap();
		ScavTrap& operator=(ScavTrap const& copy);
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void challengeNewcomer();

	private:
		int m_hitPoints;
		int m_maxHitPoints;
		int m_energyPoints;
		int m_maxEnergyPoints;
		int m_level;
		std::string m_name;
		int m_meleeAttackDamage;
		int m_rangedAttackDamage;
		int m_armorDamageReduction;

};

#endif

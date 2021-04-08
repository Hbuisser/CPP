
#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const& copy);
		~ClapTrap();
		ClapTrap& operator=(ClapTrap const& copy);

		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName() const;

	protected:
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


# include "ClapTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ClapTrap::ClapTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& CLAP Magic constructor call" << std::endl;
	m_hitPoints = 0;
	m_maxHitPoints = 0;
	m_energyPoints = 0;
	m_maxEnergyPoints = 0;
	m_level = 0;
	m_name = "";
	m_meleeAttackDamage = 0;
	m_rangedAttackDamage = 0;
	m_armorDamageReduction = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& CLAP Magic constructor call" << std::endl;
	m_hitPoints = 0;
	m_maxHitPoints = 0;
	m_energyPoints = 0;
	m_maxEnergyPoints = 0;
	m_level = 0;
	m_name = name;
	m_meleeAttackDamage = 0;
	m_rangedAttackDamage = 0;
	m_armorDamageReduction = 0;
}

// COPY
ClapTrap::ClapTrap(ClapTrap const& copy)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& CLAP Copy constructor call" << std::endl;
	*this = copy;
}

/*
** DESTRUCTOR
*/

ClapTrap::~ClapTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& CLAP Magic destructor call" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
ClapTrap& ClapTrap::operator=(ClapTrap const& copy)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& CLAP Assignation constructor call" << std::endl;
	m_hitPoints = copy.m_hitPoints;
	m_maxHitPoints = copy.m_maxHitPoints;
	m_energyPoints = copy.m_energyPoints;
	m_maxEnergyPoints = copy.m_maxEnergyPoints;
	m_level = copy.m_level;
	m_name = copy.m_name;
	m_meleeAttackDamage = copy.m_meleeAttackDamage;
	m_rangedAttackDamage = copy.m_rangedAttackDamage;
	m_armorDamageReduction = copy.m_armorDamageReduction;

	return *this;
}

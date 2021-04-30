
# include "ClapTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ClapTrap::ClapTrap()
{
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
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Magic constructor call" << std::endl;
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
	
}

/*
** DESTRUCTOR
*/

ClapTrap::~ClapTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Magic destructor call" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
ClapTrap& ClapTrap::operator=(ClapTrap const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void ClapTrap::takeDamage(unsigned int amount)
{
	int damage;
	damage = amount - m_armorDamageReduction;
	std::cout << "FR4G-TP " << m_name << " takes damage and loses " << damage << " hit points" << std::endl;
	m_hitPoints -= amount;
    m_hitPoints += m_armorDamageReduction;
    if (m_hitPoints < 0)
    	m_hitPoints = 0;
	if (m_hitPoints > m_maxHitPoints)
		m_hitPoints = m_maxHitPoints;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << m_name << " regenerates " << amount << " hit points" << std::endl;
	m_hitPoints += amount;
	if (m_hitPoints > m_maxHitPoints)
    	m_hitPoints = m_maxHitPoints;
}

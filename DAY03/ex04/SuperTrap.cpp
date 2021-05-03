
# include "SuperTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
SuperTrap::SuperTrap()
{
	
}

SuperTrap::SuperTrap(std::string name) : ClapTrap(), FragTrap(name), NinjaTrap(name)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Magic constructor call" << std::endl;
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints = 120;
	m_maxEnergyPoints = 120;
	m_level = 1;
	m_name = name;
	m_meleeAttackDamage = 60;
	m_rangedAttackDamage = 20;
	m_armorDamageReduction = 5;
}

// COPY
SuperTrap::SuperTrap(SuperTrap const& copy)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Copy constructor call" << std::endl;
	*this = copy;
}

/*
** DESTRUCTOR
*/

SuperTrap::~SuperTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Magic destructor call" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
SuperTrap& SuperTrap::operator=(SuperTrap const& copy)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Assignation constructor call" << std::endl;
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

/*
** MEMBER FUNCTIONS
*/

void SuperTrap::getHitPoints()
{
	std::cout << "=========> " << m_name << " has " << m_hitPoints << " hit points" << std::endl;
}

void SuperTrap::getEnergyPoints()
{
	std::cout << "=========> " << m_name << " has " << m_energyPoints << " energy points" << std::endl;
}

std::string SuperTrap::getName() const
{
	return (m_name);
}

////////////////////////////////

void SuperTrap::rangedAttack(std::string const& target)
{
	FragTrap::rangedAttack(target);
}

void SuperTrap::meleeAttack(std::string const& target)
{
	NinjaTrap::meleeAttack(target);
}

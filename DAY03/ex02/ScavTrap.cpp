
# include "ScavTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ScavTrap::ScavTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Magic constructor call" << std::endl;
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints = 50;
	m_maxEnergyPoints = 50;
	m_level = 1;
	m_name = "";
	m_meleeAttackDamage = 20;
	m_rangedAttackDamage = 15;
	m_armorDamageReduction = 3;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Magic constructor call" << std::endl;
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints = 50;
	m_maxEnergyPoints = 50;
	m_name = name;
	m_level = 1;
	m_meleeAttackDamage = 20;
	m_rangedAttackDamage = 15;
	m_armorDamageReduction = 3;
}

// COPY
ScavTrap::ScavTrap(ScavTrap const& copy)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Copy constructor call" << std::endl;
	*this = copy;
}

/*
** DESTRUCTOR
*/

ScavTrap::~ScavTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Magic destructor call" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
ScavTrap& ScavTrap::operator=(ScavTrap const& copy)
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

void ScavTrap::getHitPoints()
{
	std::cout << "=========> " << m_name << " has " << m_hitPoints << " hit points" << std::endl;
}

void ScavTrap::getEnergyPoints()
{
	std::cout << "=========> " << m_name << " has " << m_energyPoints << " energy points" << std::endl;
}

void ScavTrap::rangedAttack(std::string const& target)
{
	std::cout << "SCAVVVVV " << m_name << " attaque " << target << " a distance, causant " << m_rangedAttackDamage << " Points de degats !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const& target)
{
	std::cout << "SCAVVVVV " << m_name << " attaque " << target << " a distance, causant " << m_meleeAttackDamage << " Points de degats !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
	int damage;

	if (amount > m_armorDamageReduction)
	{
		damage = amount - m_armorDamageReduction;
		std::cout << "SCAVVVVV " << m_name << " takes damage and loses " << damage << " hit points" << std::endl;
		m_hitPoints -= amount;
		m_hitPoints += m_armorDamageReduction;
		if (m_hitPoints < 0)
			m_hitPoints = 0;
		if (m_hitPoints > m_maxHitPoints)
			m_hitPoints = m_maxHitPoints;
	}
	else
		std::cout << "SCAVVVVV " << m_name << " didn't receive any damage. The Armor is stronger than the attack" << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SCAVVVVV " << m_name << " regenerates " << amount << " hit points" << std::endl;
	m_hitPoints += amount;
	if (m_hitPoints > m_maxHitPoints)
    	m_hitPoints = m_maxHitPoints;
}

void ScavTrap::challengeNewcomer()
{
	int random;
	std::string challenges[5] = {"Become a jedi", "Become a sith", "Win the module race", "Kill Darth Sidious", "Kill darth Maul"};

	srand(time(NULL)); //If srand not initialized, random name will always be the same
	random = rand() % 5 + 0;
	std::cout << "Challenge : " << challenges[random] << std::endl;
}

# include "ScavTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ScavTrap::ScavTrap()
{
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
	m_level = 1;
	m_name = name;
	m_meleeAttackDamage = 20;
	m_rangedAttackDamage = 15;
	m_armorDamageReduction = 3;
}

// COPY
ScavTrap::ScavTrap(ScavTrap const& copy)
{
	
}

/*
** DESTRUCTOR
*/

ScavTrap::~ScavTrap()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
ScavTrap& ScavTrap::operator=(ScavTrap const& copy)
{
	if (this != &copy)
	{
		
	}
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

void ScavTrap::challengeNewcomer()
{
	int random;
	std::string challenges[5] = {"Become a jedi", "Become a sith", "Win the module race", "Kill Darth Sidious", "Kill darth Maul"};

	srand(time(NULL)); //If srand not initialized, random name will always be the same
	random = rand() % 5 + 0;
	std::cout << "Challenge : " << challenges[random] << std::endl;
}
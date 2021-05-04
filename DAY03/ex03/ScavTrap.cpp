
# include "ScavTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ScavTrap::ScavTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& SCAV Magic constructor call" << std::endl;
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
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& SCAV Magic constructor call" << std::endl;
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
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& SCAV Copy constructor call" << std::endl;
	*this = copy;
}

/*
** DESTRUCTOR
*/

ScavTrap::~ScavTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& SCAV Magic destructor call" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
ScavTrap& ScavTrap::operator=(ScavTrap const& copy)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& SCAV Assignation constructor call" << std::endl;
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


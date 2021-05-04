
# include "FragTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
FragTrap::FragTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& FRAG Magic constructor call" << std::endl;
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints = 100;
	m_maxEnergyPoints = 100;
	m_level = 1;
	m_name = "";
	m_meleeAttackDamage = 30;
	m_rangedAttackDamage = 20;
	m_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string name) : m_name(name)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& FRAG Magic constructor call" << std::endl;
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_energyPoints = 100;
	m_maxEnergyPoints = 100;
	m_level = 1;
	m_meleeAttackDamage = 30;
	m_rangedAttackDamage = 20;
	m_armorDamageReduction = 5;
}

// COPY
FragTrap::FragTrap(FragTrap const& copy)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& FRAG Copy constructor call" << std::endl;
	*this = copy;
}

/*
** DESTRUCTOR
*/

FragTrap::~FragTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& FRAG Magic destructor call" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
FragTrap& FragTrap::operator=(FragTrap const& copy)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& FRAG Assignation constructor call" << std::endl;
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

int FragTrap::getHitPoints() const
{
	return m_hitPoints;
}

int FragTrap::getEnergyPoints() const
{
	return m_energyPoints;
}

void FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << m_name << " attacks " << target << " at range, causing " << m_rangedAttackDamage << " points of damage" << std::endl;
}

void FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << m_name << " attacks " << target << " at melee, causing " << m_meleeAttackDamage << " points of damage" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
	int damage;

	if (amount > (unsigned int)m_armorDamageReduction)
	{
		damage = amount - m_armorDamageReduction;
		std::cout << "FR4G-TP " << m_name << " takes damage and loses " << damage << " hit points" << std::endl;
		m_hitPoints -= amount;
		m_hitPoints += m_armorDamageReduction;
		if (m_hitPoints < 0)
			m_hitPoints = 0;
		if (m_hitPoints > m_maxHitPoints)
			m_hitPoints = m_maxHitPoints;
	}
	else
		std::cout << "FR4G-TP " << m_name << " didn't receive any damage. The Armor is stronger than the attack" << std::endl;
}

void FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FR4G-TP " << m_name << " regenerates " << amount << " hit points" << std::endl;
	m_hitPoints += amount;
	if (m_hitPoints > m_maxHitPoints)
    	m_hitPoints = m_maxHitPoints;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	int random;
	std::string attacks[5][2] = {{"Force", "80"}, {"Eclair", "85"}, {"Laser rouge", "20"}, {"Laser vert", "15"}, {"Laser bleu", "18"}};

	if (m_energyPoints < 25)
	{
		std::cout << m_name << " can't attack, his energy level is too low" << std::endl; 
		return ;
	}
	m_energyPoints -= 25;
	srand(time(NULL)); //If srand not initialized, random name will always be the same
	random = rand() % 5 + 0;
	std::cout << m_name << " attacks " << target << " with " << attacks[random][0] << " causing " << attacks[random][1] << " points of damage " << std::endl;
}

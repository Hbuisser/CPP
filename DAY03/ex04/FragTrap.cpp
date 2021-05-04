
# include "FragTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
FragTrap::FragTrap() : ClapTrap("")
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

FragTrap::FragTrap(std::string name) : ClapTrap(name)
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

FragTrap::FragTrap(int i) : ClapTrap("")
{
	i = 0;
	m_hitPoints = 100;
	m_maxHitPoints = 100;
	m_rangedAttackDamage = 20;
	m_armorDamageReduction = 5;
}

// COPY
FragTrap::FragTrap(FragTrap const& copy) : ClapTrap(copy)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& FRAG Copy constructor call" << std::endl;
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
	ClapTrap::operator=(copy);
	
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

std::string FragTrap::getName() const
{
	return (m_name);
}

void FragTrap::rangedAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << m_name << " attaque " << target << " a distance, causant " << m_rangedAttackDamage << " Points de degats !" << std::endl;
}

void FragTrap::meleeAttack(std::string const& target)
{
	std::cout << "FR4G-TP " << m_name << " attaque " << target << " a distance, causant " << m_meleeAttackDamage << " Points de degats !" << std::endl;
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

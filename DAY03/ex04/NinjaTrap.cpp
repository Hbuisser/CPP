
# include "NinjaTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
NinjaTrap::NinjaTrap() : ClapTrap("")
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& NINJA Magic constructor call" << std::endl;
	m_hitPoints = 60;
	m_maxHitPoints = 60;
	m_energyPoints = 120;
	m_maxEnergyPoints = 120;
	m_level = 1;
	m_name = "";
	m_meleeAttackDamage = 60;
	m_rangedAttackDamage = 5;
	m_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& NINJA Magic constructor call" << std::endl;
	m_hitPoints = 60;
	m_maxHitPoints = 60;
	m_energyPoints = 120;
	m_maxEnergyPoints = 120;
	m_level = 1;
	m_name = name;
	m_meleeAttackDamage = 60;
	m_rangedAttackDamage = 5;
	m_armorDamageReduction = 0;
}

NinjaTrap::NinjaTrap(int i) : ClapTrap("")
{
	i = 0;
	m_energyPoints = 120;
	m_maxEnergyPoints = 120;
	m_meleeAttackDamage = 60;
}

// COPY
NinjaTrap::NinjaTrap(NinjaTrap const& copy)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& NINJA Copy constructor call" << std::endl;
	*this = copy;
}

/*
** DESTRUCTOR
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& NINJA Magic destructor call" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
NinjaTrap& NinjaTrap::operator=(NinjaTrap const& copy)
{
	if (this != &copy)
	{
		std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& NINJA Assignation constructor call" << std::endl;
		m_hitPoints = copy.m_hitPoints;
		m_maxHitPoints = copy.m_maxHitPoints;
		m_energyPoints = copy.m_energyPoints;
		m_maxEnergyPoints = copy.m_maxEnergyPoints;
		m_level = copy.m_level;
		m_name = copy.m_name;
		m_meleeAttackDamage = copy.m_meleeAttackDamage;
		m_rangedAttackDamage = copy.m_rangedAttackDamage;
		m_armorDamageReduction = copy.m_armorDamageReduction;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

std::string NinjaTrap::getName() const
{
	return (m_name);
}

void NinjaTrap::rangedAttack(std::string const& target)
{
	std::cout << "SCAVVVVV " << m_name << " attacks " << target << " causing " << m_rangedAttackDamage << " points of damage " << std::endl;
}

void NinjaTrap::meleeAttack(std::string const& target)
{
	std::cout << "SCAVVVVV " << m_name << " attacks " << target << " causing " << m_meleeAttackDamage << " points of damage " << std::endl;
}

///////////////////////////////

void NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
  	std::cout << "Ninjaa_ninja_ninja " << m_name << " attacks " << target.getName() << " causing "<< m_rangedAttackDamage << " points of damage " << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &target)
{
  	std::cout << "Ninja_clap_clap " << m_name << " attacks " << target.getName() << " causing "<< m_rangedAttackDamage << " points of damage " << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &target)
{
  	std::cout << "Ninja_frag_frag " << m_name << " attacks " << target.getName() << " causing "<< m_rangedAttackDamage << " points of damage " << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
  	std::cout << "Ninja_scav_scav " << m_name << " attacks " << target.getName() << " causing "<< m_rangedAttackDamage << " points of damage " << std::endl;
}

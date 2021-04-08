
# include "NinjaTrap.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
NinjaTrap::NinjaTrap()
{
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

NinjaTrap::NinjaTrap(std::string name)
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Magic constructor call" << std::endl;
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

// COPY
NinjaTrap::NinjaTrap(NinjaTrap const& copy)
{
	
}

/*
** DESTRUCTOR
*/

NinjaTrap::~NinjaTrap()
{
	std::cout << "&&&&&&&&&&&&&&&&&&&&&&&&& Magic destructor call" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
NinjaTrap& NinjaTrap::operator=(NinjaTrap const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void NinjaTrap::getHitPoints()
{
	std::cout << "=========> " << m_name << " has " << m_hitPoints << " hit points" << std::endl;
}

void NinjaTrap::getEnergyPoints()
{
	std::cout << "=========> " << m_name << " has " << m_energyPoints << " energy points" << std::endl;
}

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

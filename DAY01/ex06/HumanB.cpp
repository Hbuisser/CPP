
# include "HumanB.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
HumanB::HumanB(std::string name) : m_name(name)
{
	
}

// COPY
// HumanB::HumanB(HumanB const& copy)
// {
	
// }

/*
** DESTRUCTOR
*/

HumanB::~HumanB()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
// HumanB& HumanB::operator=(HumanB const& copy)
// {
// 	if (this != &copy)
// 	{
		
// 	}
// 	return *this;
// }

/*
** MEMBER FUNCTIONS
*/

void HumanB::attack()
{
	std::cout << m_name << " attacks with his " << m_weaponB->m_type << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	m_weaponB = &weapon;
}


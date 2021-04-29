
# include "HumanB.hpp"

HumanB::HumanB(std::string name) : m_name(name)
{
	
}

HumanB::~HumanB()
{
	
}

void HumanB::setWeapon(Weapon &weapon)
{
	m_weaponB = &weapon;
}

void HumanB::attack()
{
	std::cout << m_name << " attacks with his " << m_weaponB->getType() << std::endl;
}


# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), m_weaponA(weapon)
{
}

HumanA::~HumanA()
{	
}

HumanA& HumanA::operator=(HumanA const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

void HumanA::attack()
{
	// Use of reference to be able to get the type in the Weapon object
	std::cout << m_name << " attacks with his " << m_weaponA.getType() << std::endl;
}

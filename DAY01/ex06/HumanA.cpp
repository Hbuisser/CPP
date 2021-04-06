
# include "HumanA.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
// HumanA::HumanA()
// {

// }

HumanA::HumanA(std::string name, Weapon &weapon) : m_name(name), m_weaponA(weapon)
{

}

// COPY
// HumanA::HumanA(HumanA const& copy)
// {
	
// }

/*
** DESTRUCTOR
*/

HumanA::~HumanA()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
HumanA& HumanA::operator=(HumanA const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void HumanA::attack()
{
	// Use of reference to be able to get the type in the Weapon object
	std::cout << m_name << " attacks with his " << m_weaponA.m_type << std::endl;
}

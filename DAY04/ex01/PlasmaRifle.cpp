
# include "PlasmaRifle.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	
}

// PlasmaRifle::PlasmaRifle(std::string name, int damage, int apcost):
// 	AWeapon(name, apcost, damage), m_name(name), m_damage(damage), m_apcost(apcost)
// {

// }

// COPY
PlasmaRifle::PlasmaRifle(PlasmaRifle const&)
{
	
}

/*
** DESTRUCTOR
*/

PlasmaRifle::~PlasmaRifle()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
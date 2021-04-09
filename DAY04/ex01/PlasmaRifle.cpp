
# include "PlasmaRifle.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	
}

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
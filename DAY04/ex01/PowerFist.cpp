
# include "PowerFist.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	
}

// COPY
PowerFist::PowerFist(PowerFist const&)
{
	
}

/*
** DESTRUCTOR
*/

PowerFist::~PowerFist()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
PowerFist& PowerFist::operator=(PowerFist const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
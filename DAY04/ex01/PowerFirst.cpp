
# include "PowerFirst.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
PowerFirst::PowerFirst() : AWeapon("Power First", 8, 50)
{
	
}

// COPY
PowerFirst::PowerFirst(PowerFirst const&)
{
	
}

/*
** DESTRUCTOR
*/

PowerFirst::~PowerFirst()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
PowerFirst& PowerFirst::operator=(PowerFirst const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void PowerFirst::attack() const
{
	std::cout << "* pschhh... SBAM ! *" << std::endl;
}
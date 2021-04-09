
# include "SuperMutant.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
}

// COPY
SuperMutant::SuperMutant(SuperMutant const&)
{
	
}

/*
** DESTRUCTOR
*/

SuperMutant::~SuperMutant()
{
	std::cout <<  "Aaargh ..." << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
SuperMutant& SuperMutant::operator=(SuperMutant const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void SuperMutant::takeDamage(int i)
{
	// attention a l'exeption
	i -= 3;
	Enemy::takeDamage(i);
}


# include "RadScorpion.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

// COPY
RadScorpion::RadScorpion(RadScorpion const& copy) : Enemy(copy)
{
	std::cout << "* click click click *" << std::endl;
}

/*
** DESTRUCTOR
*/

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
RadScorpion& RadScorpion::operator=(RadScorpion const& copy)
{
	if (this != &copy)
	{
		Enemy::operator=(copy);
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/


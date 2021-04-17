
# include "Ice.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Ice::Ice() : AMateria("ice")
{
	
}

// COPY
// Ice::Ice(Ice const&) : AMateria("ice")
// {
	
// }

/*
** DESTRUCTOR
*/

Ice::~Ice()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Ice& Ice::operator=(Ice const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

AMateria* Ice::clone() const
{
	return (new Ice());
}

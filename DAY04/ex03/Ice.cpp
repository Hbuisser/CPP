
# include "Ice.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Ice::Ice() : AMateria("ice")
{
	
}

// COPY
Ice::Ice(Ice const& copy) : AMateria("ice")
{
	_xp = copy.getXP();
}

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
		_xp = copy.getXP();
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

void Ice::use(ICharacter& target)
{
	_xp += 10;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

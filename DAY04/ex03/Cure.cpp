
# include "Cure.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Cure::Cure() : AMateria("cure")
{
	
}

// COPY
// Cure::Cure(Cure const&) : AMateria("cure")
// {
	
// }

/*
** DESTRUCTOR
*/

Cure::~Cure()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Cure& Cure::operator=(Cure const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

AMateria* Cure::clone() const
{
	return (new Cure());
}

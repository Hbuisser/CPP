
# include "AMateria.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
AMateria::AMateria(std::string const& type) : _xp(0)
{
	m_type = type;
}

// COPY
// AMateria::AMateria(AMateria const&)
// {
	
// }

/*
** DESTRUCTOR
*/

AMateria::~AMateria()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
AMateria& AMateria::operator=(AMateria const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/



# include "Weapon.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Weapon::Weapon()
{
	
}

Weapon::Weapon(std::string type)
{
	m_type = type;
}

// COPY
// Weapon::Weapon(Weapon const& copy)
// {
	
// }

/*
** DESTRUCTOR
*/

Weapon::~Weapon()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
// Weapon& Weapon::operator=(Weapon const& copy)
// {
// 	if (this != &copy)
// 	{
		
// 	}
// 	return *this;
// }

/*
** MEMBER FUNCTIONS
*/

void Weapon::setType(std::string type)
{
	m_type = type;
}

const std::string &Weapon::getType() const
{
	return (m_type);
}
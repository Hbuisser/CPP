
# include "AMateria.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
AMateria::AMateria(std::string const& type) : m_type(type), m_xp(0)
{

}

// COPY
AMateria::AMateria(AMateria const& copy)
{
	*this = copy;
}

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
		m_type = copy.m_type;
		m_xp = copy.m_xp;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

std::string const& AMateria::getType() const
{
	return (m_type);
}

unsigned int AMateria::getXP() const
{
	return (m_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	m_xp += 10;
}


# include "AMateria.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
AMateria::AMateria()
{
	this->m_xp = 0;
    this->m_type = "no_type";
}

AMateria::AMateria(std::string const& type) : m_type(type), m_xp(0)
{

}

// COPY
AMateria::AMateria(AMateria const& copy)
{
	this->m_xp = copy.m_xp;
    this->m_type = copy.m_type;
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
		this->m_type = copy.m_type;
		this->m_xp = copy.m_xp;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

std::string const& AMateria::getType() const
{
	return (this->m_type);
}

unsigned int AMateria::getXP() const
{
	return (this->m_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	m_xp += 10;
}

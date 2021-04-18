
# include "AMateria.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
AMateria::AMateria(std::string const& type) : m_type(type), _xp(0)
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
		_xp = copy._xp;
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
	return (_xp);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
	_xp += 10;
}

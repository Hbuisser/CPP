
# include "Cure.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Cure::Cure() : AMateria("cure")
{
	
}

// COPY
Cure::Cure(Cure const& copy) : AMateria("cure")
{
	this->m_xp = copy.getXP();
}

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
		this->m_xp = copy.getXP();
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	m_xp += 10;
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

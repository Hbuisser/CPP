
# include "Peon.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Peon::Peon() : Victim()
{
	
}

Peon::Peon(std::string name) : Victim(name), m_name(name)
{
	std::cout << "Zog zog." << std::endl;
}

// COPY
Peon::Peon(Peon const&)
{
}

/*
** DESTRUCTOR
*/

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Peon& Peon::operator=(Peon const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void Peon::getPolymorphed() const
{
	std::cout << m_name << " has been turned into a pink pony!" << std::endl;
}

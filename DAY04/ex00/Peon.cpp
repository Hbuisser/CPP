
# include "Peon.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Peon::Peon() : Victim()
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(std::string name) : Victim(name), m_name(name)
{
	std::cout << "Zog zog." << std::endl;
}

// COPY
Peon::Peon(Peon const& copy) : Victim(copy), m_name(copy.m_name)
{
	std::cout << "Zog zog." << std::endl;
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
		m_name = copy.m_name;
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


# include "Victim.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Victim::Victim()
{
	
}


Victim::Victim(std::string name) : m_name(name) 
{
	std::cout << "Some random victim called " << m_name << " just appeared!" << std::endl; 
}

// COPY
Victim::Victim(Victim const&)
{
	
}

/*
** DESTRUCTOR
*/

Victim::~Victim()
{
	std::cout << "Victim " << m_name << " just died for no apparent reasons!" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Victim& Victim::operator=(Victim const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void Victim::announce() const
{
	std::cout << "I am " << m_name << ", and I like otters!" << std::endl; 
}

void Victim::getPolymorphed() const
{
	std::cout << m_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream& operator<<(std::ostream &stream, Victim const& copy)
{
	copy.announce();
	return (stream);
}
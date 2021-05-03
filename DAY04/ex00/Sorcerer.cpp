
# include "Sorcerer.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Sorcerer::Sorcerer(std::string name, std::string title) : m_name(name), m_title(title)
{
	std::cout << m_name << ", " << m_title << ", is born!" << std::endl;
}

// COPY
Sorcerer::Sorcerer(Sorcerer const& copy) : m_name(copy.m_name), m_title(copy.m_title)
{
	std::cout << m_name << ", " << m_title << ", is born!" << std::endl;
}

/*
** DESTRUCTOR
*/

Sorcerer::~Sorcerer()
{
	std::cout << m_name << ", " << m_title << ", is dead. Consequences will never be the same!" << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
Sorcerer& Sorcerer::operator=(Sorcerer const& copy)
{
	if (this != &copy)
	{
		m_name = copy.m_name;
		m_title = copy.m_title;
		std::cout << "A new me is born !" << std::endl;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void Sorcerer::announce() const
{
	std::cout << "I am " << m_name << ", " << m_title << ", and I like ponies!" << std::endl; 
}

void Sorcerer::polymorph(Victim const& other) const
{
	other.getPolymorphed();
}

//////////////// overload de l'operateur <<

std::ostream& operator<<(std::ostream &stream, Sorcerer const& copy)
{
	copy.announce();
	return (stream);
}

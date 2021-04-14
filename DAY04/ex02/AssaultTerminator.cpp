
# include "AssaultTerminator.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
}

// COPY
AssaultTerminator::AssaultTerminator(AssaultTerminator const&)
{
	std::cout << "* teleports from space *" << std::endl;
}

/*
** DESTRUCTOR
*/

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
}

/*
** OPERATORS
*/

// ASSIGNATION
AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. Purify it !" << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout <<  "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attaque with chainfists *" << std::endl;
}

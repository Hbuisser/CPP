# include "Brain.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Brain::Brain()
{

}

// COPY
// Brain::Brain(Brain const& copy)
// {
// 	copy = 0;
// }

/*
** DESTRUCTOR
*/

Brain::~Brain()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Brain &Brain::operator=(Brain const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

Brain *Brain::identify()
{
	return (this);
}


//theorie :
// thisétant un pointeur sur un objet,*thisest l'objet lui-même

// Personnage* Personnage::getAdresse() const
// {
//     return this;
// }
// Duree& Duree::operator+=(const Duree &duree2)
// {
//     return *this;
// }
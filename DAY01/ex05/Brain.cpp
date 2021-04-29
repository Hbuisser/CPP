# include "Brain.hpp"

Brain::Brain()
{
}

Brain::~Brain()
{
}

Brain &Brain::operator=(Brain const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

const Brain *Brain::identify() const
{
	return (this);
}


////////////////////////////////////////////////////////////////////
// this est un pointeur sur l'objet, *this est l'objet lui-même

// Personnage* Personnage::getAdresse() const
// {
//     return this;
// }
// Duree& Duree::operator+=(const Duree &duree2)
// {
//     return *this;
// }

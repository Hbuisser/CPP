
#ifndef ISQUAD_HPP
#define ISQUAD_HPP

# include <iostream>
# include <string>

#include "ISpaceMarine.hpp"

// Pure virtual fct are set to 0, they have to be implemented in a subclass
// You can't insanciate a pure virtual class, only if the pure virtual fct is implemented in a child class

// Class abstraite, normalement on rajoute un A devant la classe => ASquad
// I pour Interface => que des pure et pas d'attributs
// Maniere de definir un comportement, sorte de contrat


class ISquad
{
	public:
		virtual ~ISquad() {}
		virtual int getCount() const = 0;
		virtual ISpaceMarine* getUnit(int) const = 0;
		virtual int push(ISpaceMarine*) = 0;
};

#endif

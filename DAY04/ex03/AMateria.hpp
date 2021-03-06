
#ifndef AMATERIA_HPP
#define AMATERIA_HPP

# include <iostream>
# include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string 	m_type;
		unsigned int 	m_xp;
		AMateria();
		
	public:
		AMateria(std::string const& type);
		AMateria(AMateria const& copy);
		AMateria& operator=(AMateria const& copy);
		virtual ~AMateria();

		std::string const & getType() const; //Returns the materia type
		unsigned int getXP() const; //Returns the Materia's XP
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif

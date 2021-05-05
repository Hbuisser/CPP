
#ifndef ICE_HPP
#define ICE_HPP

# include <iostream>
# include <string>

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const& copy);
		virtual ~Ice();
		Ice& operator=(Ice const& copy);

		AMateria* clone() const;
		virtual void use(ICharacter& target);

	private:


};

#endif

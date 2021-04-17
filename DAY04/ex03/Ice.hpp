
#ifndef ICE_HPP
#define ICE_HPP

# include <iostream>
# include <string>

#include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		//Ice(Ice const& copy);
		~Ice();
		Ice& operator=(Ice const& copy);

		AMateria* clone() const;

	private:


};

#endif

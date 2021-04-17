
#ifndef CURE_HPP
#define CURE_HPP

# include <iostream>
# include <string>

#include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		//Cure(Cure const& copy);
		~Cure();
		Cure& operator=(Cure const& copy);

		AMateria* clone() const;

	private:


};

#endif

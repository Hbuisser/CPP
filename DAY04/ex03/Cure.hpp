
#ifndef CURE_HPP
#define CURE_HPP

# include <iostream>
# include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const& copy);
		virtual ~Cure();
		Cure& operator=(Cure const& copy);

		AMateria* clone() const;
		virtual void use(ICharacter& target);

	private:


};

#endif

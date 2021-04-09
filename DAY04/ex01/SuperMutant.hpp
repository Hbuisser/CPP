
#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

# include <iostream>
# include <string>

# include "Enemy.hpp"

class SuperMutant : public Enemy
{
	public:
		SuperMutant();
		SuperMutant(SuperMutant const& copy);
		~SuperMutant();
		SuperMutant& operator=(SuperMutant const& copy);

		void takeDamage(int i);

	private:


};

#endif

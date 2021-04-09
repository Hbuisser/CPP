
#ifndef POWERFIRST_HPP
#define POWERFIRST_HPP

# include <iostream>
# include <string>

# include "AWeapon.hpp"

class PowerFirst : AWeapon
{
	public:
		PowerFirst();
		PowerFirst(PowerFirst const& copy);
		~PowerFirst();
		PowerFirst& operator=(PowerFirst const& copy);
		void attack() const;

	private:


};

#endif

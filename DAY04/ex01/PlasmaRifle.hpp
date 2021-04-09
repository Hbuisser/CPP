
#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

# include <iostream>
# include <string>

# include "AWeapon.hpp"

class PlasmaRifle : AWeapon
{
	public:
		PlasmaRifle();
		//PlasmaRifle(std::string name, int damage, int apcost);
		PlasmaRifle(PlasmaRifle const& copy);
		~PlasmaRifle();
		PlasmaRifle& operator=(PlasmaRifle const& copy);
		void attack() const;

	private:
		

};

#endif

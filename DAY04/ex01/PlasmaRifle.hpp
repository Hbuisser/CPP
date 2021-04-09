
#ifndef PLASMARIFLE_HPP
#define PLASMARIFLE_HPP

# include <iostream>
# include <string>

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
	public:
		PlasmaRifle();
		PlasmaRifle(PlasmaRifle const& copy);
		~PlasmaRifle();
		PlasmaRifle& operator=(PlasmaRifle const& copy);
		void attack() const;

	private:
		

};

#endif


#ifndef HUMANB_HPP
#define HUMANB_HPP

# include <iostream>
# include <string>

#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void setWeapon(Weapon &weapon);
		void attack();

	private:
		std::string m_name;
		//To avoid forced constructor initialization use a pointer on weapon, because a pointer can be initialized with null while a reference cannot
		Weapon 		*m_weaponB;

};

#endif

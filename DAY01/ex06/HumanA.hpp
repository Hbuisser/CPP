
#ifndef HUMANA_HPP
#define HUMANA_HPP

# include <iostream>
# include <string>

#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA();
		//HumanA(HumanA const& copy);
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
		HumanA& operator=(HumanA const& copy);
		void attack();

	private:
		std::string m_name;
		//Reference Used to take an address (like a pointer), but in the stack instead of the heap
		Weapon 		&m_weaponA;

};

#endif


#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include <string>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(FragTrap const& copy);
		~FragTrap();
		FragTrap& operator=(FragTrap const& copy);
		void getHitPoints();
		void getEnergyPoints();
		void rangedAttack(std::string const& target);
		void meleeAttack(std::string const& target);
		void vaulthunter_dot_exe(std::string const & target); 

	private:
	
};

#endif

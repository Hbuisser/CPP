
#ifndef SUPERTRAP_HPP
#define SUPERTRAP_HPP

# include <iostream>
# include <string>

# include "FragTrap.hpp"
# include "NinjaTrap.hpp"
# include "ClapTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
	public:
		SuperTrap();
		SuperTrap(std::string name);
		SuperTrap(SuperTrap const& copy);
		~SuperTrap();
		SuperTrap& operator=(SuperTrap const& copy);

		void getHitPoints();
		void getEnergyPoints();
		std::string getName() const;
		
		void rangedAttack(std::string const& target);
  		void meleeAttack(std::string const& target);

	private:
};

#endif

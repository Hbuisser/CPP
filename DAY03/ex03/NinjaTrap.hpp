
#ifndef NINJATRAP_HPP
#define NINJATRAP_HPP

# include <iostream>
# include <string>

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
	public:
		NinjaTrap();
		NinjaTrap(std::string name);
		NinjaTrap(NinjaTrap const& copy);
		~NinjaTrap();
		NinjaTrap& operator=(NinjaTrap const& copy);
		
		void rangedAttack(std::string const & target);
		void meleeAttack(std::string const & target);

		void ninjaShoebox(NinjaTrap const &target);
		void ninjaShoebox(ClapTrap const &target);
		void ninjaShoebox(FragTrap const &target);
		void ninjaShoebox(ScavTrap const &target);

	private:


};

#endif

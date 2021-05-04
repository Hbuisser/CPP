
#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

# include <iostream>
# include <string>

#include "ClapTrap.hpp"

//if classes B and C inherit virtually from class A, 
//then objects of class D will contain only one set 
//of the member variables from class A
class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string name);
		FragTrap(int i);
		FragTrap(FragTrap const& copy);
		~FragTrap();
		FragTrap& operator=(FragTrap const& copy);
		
		std::string getName() const;

		void rangedAttack(std::string const& target);
		void meleeAttack(std::string const& target);
		void vaulthunter_dot_exe(std::string const & target); 

	private:
	
};

#endif

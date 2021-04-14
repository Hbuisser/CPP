
#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

# include <iostream>
# include <string>

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator();
		AssaultTerminator(AssaultTerminator const& copy);
		~AssaultTerminator();
		AssaultTerminator& operator=(AssaultTerminator const& copy);

		void battleCry() const;
		void rangedAttack() const;
		void meleeAttack() const;

	private:


};

#endif

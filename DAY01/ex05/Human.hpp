
#ifndef HUMAN_HPP
#define HUMAN_HPP

# include <iostream>
# include <string>

#include "Brain.hpp"

class Human
{
	public:
		Human();
		//Human(Human const& copy);
		~Human();
		Human& operator=(Human const& copy);
		// pointer used to keep constant memory adress even when returning from a function
		Brain m_brain;
		Brain *identify();
		Brain &getBrain();

	private:


};

#endif


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
		Brain m_brain;
		Brain *identify();
		Brain &getBrain();

	private:


};

#endif

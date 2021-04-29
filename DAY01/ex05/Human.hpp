
#ifndef HUMAN_HPP
#define HUMAN_HPP

# include <iostream>
# include <string>

#include "Brain.hpp"

class Human
{
	public:
		Human();
		~Human();
		Human& operator=(Human const& copy);
		const Brain &getBrain() const;
		const Brain *identify() const;

	private:
		const Brain m_brain;
};

#endif

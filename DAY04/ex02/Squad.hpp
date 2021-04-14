
#ifndef SQUAD_HPP
#define SQUAD_HPP

# include <iostream>
# include <string>

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

// Deep copy: an object is created by copying data of all variables and it also allocates 
// similar memory resources with the same value to the object. In order to perform Deep copy, 
// we need to explicitly define the copy constructor and assign dynamic memory as well if required. 
// Also, it is required to dynamically allocate memory to the variables in the other constructors, as well.

// shallow copy has pointers pointing on same memory adress

typedef struct squadList
{
	ISpaceMarine 	*m_unit;
	squadList		*m_next;
} 				squadList;

class Squad : public ISquad
{
	public:
		Squad();
		Squad(Squad const& copy);
		~Squad();
		Squad& operator=(Squad const& copy);

		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);

	private:
		int 		m_unitNbr;
		squadList 	*m_squadList;
};

#endif


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

typedef struct s_squadList
{
	s_squadList		*_next;
	ISpaceMarine 	*_memberMarine;
} 				s_squadList;

class Squad : public ISquad
{
	public:
		Squad();
		Squad(Squad const& copy);
		s_squadList *copySquadList(s_squadList *other);
		~Squad();
		Squad& operator=(Squad const& copy);

		int getCount() const;
		ISpaceMarine* getUnit(int) const;
		int push(ISpaceMarine*);

		int noDouble(ISpaceMarine *a_marineMember);
		s_squadList *getLast();

	private:
		int 		m_unitNbr;
		s_squadList *m_list;
};

#endif

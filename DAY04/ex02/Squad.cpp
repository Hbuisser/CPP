
# include "Squad.hpp"

// nullptr is a keyword that can be used at all places where NULL is expected. 
// Like NULL, nullptr is implicitly convertible and comparable to any pointer type. 
// Unlike NULL, it is not implicitly convertible or comparable to integral types.

/*
** CONSTRUCTORS
*/

// DEFAULT
Squad::Squad()
{
	this->m_unitNbr = 0;
	this->m_squad = NULL;
}

// COPY
// The main difference between them is that the copy constructor creates a separate 
// memory block for the new object. But the assignment operator does not make new memory space. 
// It uses the reference variable to point to the previous memory block.

// If the variables of an object have been dynamically allocated then it is required 
// to do a Deep Copy in order to create a copy of the object.
Squad::Squad(Squad const& copy)
{
	this->m_unitNbr = copy.m_unitNbr;
	this->m_squad = new ISpaceMarine*[copy.m_unitNbr];
	for (int i = 0; i < this->m_unitNbr; i++)
		this->m_squad[i] = copy.getUnit(i)->clone();
}


/*
** DESTRUCTOR
*/

Squad::~Squad()
{
	for (int i = 0; i < this->m_unitNbr; i++)
		delete (this->m_squad[i]);
	delete (this->m_squad);
}

/*
** OPERATORS
*/

// ASSIGNATION
// deepcopy means a copy on another memory address // dlete the precedent
// https://www.youtube.com/watch?v=kiET23bMTic
Squad& Squad::operator=(Squad const& copy)
{
	for (int i = 0; i < this->m_unitNbr; i++)
		delete (this->m_squad[i]);
	delete this->m_squad;
	this->m_unitNbr = copy.m_unitNbr;
	this->m_squad = new ISpaceMarine*[copy.m_unitNbr];
	for (int i = 0; i < this->m_unitNbr; i++)
		this->m_squad[i] = copy.getUnit(i)->clone();
	return (*this);
}

/*
** MEMBER FUNCTIONS
*/

int Squad::getCount() const
{
	return this->m_unitNbr;
}

ISpaceMarine* Squad::getUnit(int n) const
{
	if (n >= 0 && n <= this->m_unitNbr)
		return (this->m_squad[n]);
	return NULL;
}

int Squad::push(ISpaceMarine* a_marine)
{
	int check = 0;

	if (a_marine == NULL)
		return this->m_unitNbr;
	for (int i = 0; i < this->m_unitNbr; i++)
	{
		if (this->m_squad[i] == a_marine)
			check = 1;
	}
	if (check == 0)
	{
		ISpaceMarine **tmp = new ISpaceMarine*[this->m_unitNbr + 1];
		for (int j = 0; j < this->m_unitNbr; j++)
			tmp[j] = this->m_squad[j];
		delete [] (m_squad);
		tmp[this->m_unitNbr] = a_marine;
		this->m_unitNbr += 1;
		this->m_squad = tmp;
	}
	else
		std::cout << "ISpaceMarine already in the squad" << std::endl;
	return this->m_unitNbr;
}

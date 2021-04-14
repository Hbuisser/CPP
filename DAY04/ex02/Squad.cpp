
# include "Squad.hpp"

// nullptr is a keyword that can be used at all places where NULL is expected. 
// Like NULL, nullptr is implicitly convertible and comparable to any pointer type. 
// Unlike NULL, it is not implicitly convertible or comparable to integral types.

/*
** CONSTRUCTORS
*/

// DEFAULT
Squad::Squad() : m_unitNbr(0)
{
	m_squadList = new squadList;
	m_squadList->m_unit = nullptr;
	m_squadList->m_next = nullptr;
}

// COPY
Squad::Squad(Squad const& copy)
{
	*this = copy;
}

/*
** DESTRUCTOR
*/

Squad::~Squad()
{

}

/*
** OPERATORS
*/

// ASSIGNATION
Squad& Squad::operator=(Squad const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

int Squad::getCount() const
{
	return m_unitNbr;
}

ISpaceMarine* Squad::getUnit(int n) const
{
	int i = 0;
	squadList *iter = m_squadList;

	while (iter != nullptr)
	{
		if (i == n)
			return (iter->m_unit);
		i++;
		iter = iter->m_next;
	}
	return (nullptr);
}

int Squad::push(ISpaceMarine* a_marine)
{
	// allocate the node
	squadList *new_node = new squadList;

	// put the argument that we want to push
	new_node->m_unit = a_marine;
	new_node->m_next = nullptr;

	// if the main list is empty, make the new node the first one
	if (m_squadList == nullptr)
	{
		m_squadList->m_unit = new_node->m_unit;
		m_unitNbr++;
		return (m_unitNbr);
	}

	// get the last item of the old list
	while (m_squadList != nullptr && m_squadList->m_next != nullptr)
	{
		// if already in the old list, return
		if (m_squadList->m_unit == new_node->m_unit)
			return (m_unitNbr);
		m_squadList = m_squadList->m_next;
	}

	// link the argument to the last item
	m_squadList->m_next = new_node;
	m_unitNbr++;
	return (m_unitNbr);
}

// deepcopy means a copy on another memory address
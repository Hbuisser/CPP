
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
Squad::Squad(Squad const& copy) //: m_unitNbr(copy.m_unitNbr)
{
	//m_squadList = copySquad(copy.m_squadList);
	*this = copy;
}

// squadList *Squad::copySquad(squadList *copy)
// {
// 	squadList *new_list = new squadList;

// 	if (copy && copy->m_unit)
// 	{
// 		new_list->m_unit = copy->m_unit->clone();
// 		new_list->m_next = Squad::copySquad(copy->m_next);
// 	}
// 	else
// 	{
// 		new_list->m_unit = 0;
// 		new_list->m_next = 0;
// 	}
// 	return (new_list);
// }

/*
** DESTRUCTOR
*/

Squad::~Squad()
{
	squadList *iter;

	while (m_squadList != nullptr)
	{
		delete m_squadList->m_unit;
		iter = m_squadList;
		m_squadList = m_squadList->m_next;
		delete iter;
	}
	//delete m_squadList->m_next;
}

/*
** OPERATORS
*/

// ASSIGNATION
// deepcopy means a copy on another memory address
Squad& Squad::operator=(Squad const& copy)
{
	if (this != &copy)
	{
		squadList *iter;

		iter = copy.m_squadList;
		while (iter != nullptr)
		{
			push(iter->m_unit->clone());
			iter = iter->m_next;
		}
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

	while (i < n && iter && iter->m_next)
	{
		iter = iter->m_next;
		i++;
	}
	if (!iter)
		return (nullptr);
	return (iter->m_unit);
}

int Squad::push(ISpaceMarine* a_marine)
{
	// protect
	if (!a_marine)
		return (m_unitNbr);

	// allocate the node
	squadList *new_node = new squadList;

	// put the argument that we want to push
	new_node->m_unit = a_marine;
	new_node->m_next = nullptr;

	// if the main list is empty, make the new node the first one
	std::cout << "Yyyyyyyyyyy" << std::endl;
	if (m_squadList->m_unit == nullptr)
	{
		std::cout << "Innnnnnnn" << std::endl;
		m_squadList->m_unit = new_node->m_unit;
		m_unitNbr++;
		return (m_unitNbr);
	}

	// get the last item of the old list
	std::cout << "Xxxxxxxxxxx" << std::endl;
	while (m_squadList != nullptr && m_squadList->m_next != nullptr)
	{
		// if already in the old list, return
		if (m_squadList->m_unit == new_node->m_unit)
		{
			std::cout << "_______&&&&&&&&&&&&&&&" << std::endl;
			return (m_unitNbr);
		}
		m_squadList = m_squadList->m_next;
	}
	std::cout << "PPPPPPPPPP" << std::endl;
	// link the argument to the last item
	m_squadList->m_next = new_node;
	m_unitNbr++;
	return (m_unitNbr);
}

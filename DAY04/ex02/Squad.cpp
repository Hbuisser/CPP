
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
	squadList *iter;

	while (m_squadList != nullptr)
	{
		delete m_squadList->m_unit;
		iter = m_squadList;
		m_squadList = m_squadList->m_next;
		delete iter;
	}
}

/*
** OPERATORS
*/

// ASSIGNATION
// deepcopy means a copy on another memory address
Squad& Squad::operator=(Squad const& copy)
{
	while (m_squadList != nullptr)
	{
		delete m_squadList->m_unit;
		m_squadList = m_squadList->m_next;
	}
	m_squadList = new squadList;
	m_squadList->m_unit = nullptr;
	m_squadList->m_next = nullptr;
	squadList *iter;
	iter = copy.m_squadList;
	while (iter != nullptr)
	{
		push(iter->m_unit->clone());
		iter = iter->m_next;
	}
	return (*this);
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

squadList *Squad::getLast()
{
	squadList *iter;

	iter = m_squadList;
	while (iter && iter->m_next)
	{
		iter = iter->m_next;
	}
	return (iter);
}

int Squad::onlyOnce(ISpaceMarine *a_marine)
{
	squadList *iter;

	iter = m_squadList;
	if (!a_marine)
		return (0);
	while (iter)
	{
		if (iter->m_unit == a_marine)
			return (0);
		iter = iter->m_next;
	}
	return (1);
}

int Squad::push(ISpaceMarine* a_marine)
{
	squadList	*iter;

	if (a_marine && Squad::onlyOnce(a_marine))
	{
		iter = Squad::getLast();
		if (iter && iter->m_unit)
		{
			iter->m_next = new squadList;
			iter = iter->m_next;
			iter->m_unit = a_marine;
			iter->m_next = nullptr;
		}
		else
		{
			m_squadList->m_unit = a_marine;
			m_squadList->m_next = nullptr;
		}
		m_unitNbr++;
	}
	return (m_unitNbr);
}

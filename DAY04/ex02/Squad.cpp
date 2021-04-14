
# include "Squad.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Squad::Squad() : m_unitNbr(0)
{
	m_list = new s_squadList;
	m_list->_next = 0;
	m_list->_memberMarine = 0;
}

// COPY
Squad::Squad(Squad const& copy)
{
	m_list = copySquadList(copy.m_list);
}

s_squadList *Squad::copySquadList(s_squadList *other)
{
	s_squadList *newList;

	newList = new s_squadList;
	if (other && other->_memberMarine)
	{
		newList->_memberMarine = other->_memberMarine->clone();
		newList->_next = Squad::copySquadList(other->_next);
	}
	else
	{
		newList->_memberMarine = 0;
		newList->_next = 0;
	}
	return (newList);
}

/*
** DESTRUCTOR
*/

Squad::~Squad()
{
	if (m_list)
	{
		s_squadList *iter;
		s_squadList *next;
		iter = m_list;
		while (iter)
		{
			next = iter->_next;
			if (iter->_memberMarine)
				delete iter->_memberMarine;
			delete iter;
			iter = next;
		}
	}
	m_list = 0;
}

/*
** OPERATORS
*/

// ASSIGNATION
Squad& Squad::operator=(Squad const& copy)
{
	if (m_list)
	{
		s_squadList *iter;
		s_squadList *next;
		iter = m_list;
		while (iter)
		{
			next = iter->_next;
			if (iter->_memberMarine)
				delete iter->_memberMarine;
			delete iter;
			iter = next;
		}
	}
	m_list = copySquadList(copy.m_list);
	m_unitNbr = copy.m_unitNbr;
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
	s_squadList *iter;

	iter = m_list;
	if (n >= m_unitNbr)
		return (NULL);
	while (i < n && iter && iter->_next)
	{
		iter = iter->_next;
		i++;
	}
	if (!iter)
		return (NULL);
	return iter->_memberMarine;
}

int Squad::noDouble(ISpaceMarine *a_marineMember)
{
	s_squadList *iter;

	iter = m_list;
	if (!a_marineMember)
		return (0);
	while (iter)
	{
		if (iter->_memberMarine == a_marineMember)
			return (0);
		iter = iter->_next;
	}
	return (1);
}

s_squadList *Squad::getLast()
{
	s_squadList *iter;

	iter = m_list;
	while (iter && iter->_next)
		iter = iter->_next;
	return (iter);
}

int Squad::push(ISpaceMarine* a_marineMember)
{
	s_squadList *iter;

	if (a_marineMember && Squad::noDouble(a_marineMember))
	{
		iter = Squad::getLast();
		if (iter && iter->_memberMarine)
		{
			iter->_next = new s_squadList;
			iter = iter->_next;
			iter->_memberMarine = a_marineMember;
			iter->_next = 0;
		}
		else 
		{
			m_list->_memberMarine = a_marineMember;
			m_list->_next = 0;
		}
		m_unitNbr++;
	}
	return (m_unitNbr);
}

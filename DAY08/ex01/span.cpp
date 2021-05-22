
# include "span.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Span::Span(unsigned int N) : m_max(N)
{
	
}

// COPY
Span::Span(Span const& copy) : m_max(copy.m_max)
{
	if (!m_list.empty())
		m_list.erase(m_list.begin(), m_list.end());
	for (unsigned long i = 0; i < copy.m_list.size(); i++)
		m_list.push_back(m_list[i]);
}

/*
** DESTRUCTOR
*/

Span::~Span()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Span& Span::operator=(Span const& copy)
{
	if (this != &copy)
	{
		m_max = copy.m_max;
		if (!m_list.empty())
			m_list.erase(m_list.begin(), m_list.end());
		for (unsigned long i = 0; i < copy.m_list.size(); i++)
			m_list.push_back(m_list[i]);
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void Span::addNumber(unsigned int n)
{
	if (m_list.size() == static_cast<unsigned long>(m_max))
		throw std::exception();
	m_list.push_back(n);
	sort(m_list.begin(), m_list.end());
}

int Span::shortestSpan()
{
	if (m_list.empty() || m_list.size() == 1)
		throw std::exception();
	int tmp = *(m_list.end() - 1);
	for (std::vector<int>::const_iterator i = std::next(m_list.begin()); i != m_list.end(); i++)
	{
		if (abs(*(i - 1) - *i) < tmp)
			tmp = abs(*(i - 1) - *i);
	}
	return (tmp);
}

int Span::longestSpan()
{
	if (m_list.empty() || m_list.size() == 1)
		throw std::exception();
	int tmp = abs(m_list.front() - m_list.back()); // Ok because the array is sorted
	return (tmp);
}

std::vector<int>&	Span::getList()
{
	return (m_list);
}

void Span::addNumber(T un, T deux)
{
	for (T i = un; i != deux; i++)
		addNumber(*i);
}

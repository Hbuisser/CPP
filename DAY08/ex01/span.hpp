
#ifndef SPAN_HPP
#define SPAN_HPP

# include <iostream>
# include <string>

#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>

class Span
{
	public:
		Span(unsigned int N);
		Span(Span const& copy);
		~Span();
		Span& operator=(Span const& copy);

		void addNumber(unsigned int n);
		int shortestSpan();
		int longestSpan();

		std::vector<int>& getList();

		typedef std::vector<int>::iterator T;
		void addNumber(T un, T deux);

	private:
		Span();
		std::vector<int> 	m_list;
		int 				m_max;

};

#endif


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

# include <iostream>
# include <string>
#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <iterator>
#include <list>

#include <stack>
// https://en.cppreference.com/w/cpp/container/stack

template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack() : std::stack<T>(){};
		MutantStack(MutantStack const& copy) : std::stack<T>(copy){};
		virtual ~MutantStack() {};
		MutantStack& operator=(MutantStack const& copy)
		{
			if (this != &copy)
			{
				this->c = copy.c;
			}
			return *this;
		};

		// container_type est un member type de std::stack
		// On definit un iterator via les contenair imbrique
		// c is the default member object (container)
		typedef typename std::stack<T>::container_type::iterator 	iterator;
		iterator begin()
		{
			return this->c.begin();
		};
		iterator end()
		{
			return this->c.end();
		};

	private:

};

#endif

#include <iostream>
#include "span.hpp"

int main(void)
{
	{
		std::cout << "_______________span empty" << std::endl;
		Span f(1);

		try
		{
			std::cout << "short span: " << f.shortestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
		try
		{
			std::cout << "long span: " << f.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << e.what() << '\n';
		}
	}
	{
		std::cout << "_____________add normal" << std::endl;

		Span f(4);
		f.addNumber(5);
		f.addNumber(10);
		f.addNumber(3);
		f.addNumber(2);
		for (std::vector<int>::iterator i = f.getList().begin(); i != f.getList().end(); i++)
			std::cout << *i << " ";
		std::cout << std::endl;
		std::cout << "short span: " << f.shortestSpan() << std::endl;
		std::cout << "long span: " << f.longestSpan() << std::endl;
	}
	{
		std::cout << "__________________Given main" << std::endl;
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << "short span: " << sp.shortestSpan() << std::endl;
		std::cout << "long span: " << sp.longestSpan() << std::endl;
	}
	return (0);
}
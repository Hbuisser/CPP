#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <vector>
#include <iterator>


template<typename T>
int easyfind(const T &array, int n)
{
    typename T::const_iterator   i;

    if (array.empty())
        throw std::exception();
    i = std::find(array.begin(), array.end(), n);
    if (i == array.end())  // not found anything
        throw std::exception();
    return (*i);
}

template<typename T>
void test_easyfind(const T &array, int n)
{
    try
    {
        std::cout << easyfind(array, n) << " found" << std::endl;
    }
    catch (std::exception)
    {
        std::cerr << n << " not found" << std::endl;
    }
}

# endif
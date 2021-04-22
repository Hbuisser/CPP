#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
#include <string>

template<typename T>
void iter(T array[], size_t length, void (*fct)(T const&))
{
    for (int i = 0; i < length; i++)
        fct(array[i]);
}

template<typename T>
void show(T stuff) 
{
    std::cout << stuff << std::endl; 
}

#endif
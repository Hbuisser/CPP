#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

template<typename T>
void swap(T &x, T &y)
{
    T tmp = x;
    T tmp2 = y;
    x = tmp2;
    y = tmp;
}

template<typename U>
U & min(U & x, U & y)
{
    if (x < y)
        return x;
    else
        return y;
}

template<typename U>
U & max(U & x, U & y)
{
    if (x > y)
        return x;
    else
        return y;
}



# endif
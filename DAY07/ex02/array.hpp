#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>
#include <stdexcept>

template<typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        ~Array(void);
        Array(Array const& other);

        unsigned int const getLength() const;

    private:
        unsigned int    m_length;
        T               *m_array;
};

template<typename T>
Array<T>::Array() : m_array(0), m_length(0)
{
}

template<typename T>
Array<T>::Array(unsigned int n) : m_array(new T[n]()), m_length(n)
{
}

template<typename T>
Array<T>::~Array(void)
{
    if (this->m_array)
        delete this->m_array;
}

template<typename T>
Array<T>::Array(Array<T> const& other)
{
    if (this->m_array)
        delete this->m_array;
    this->m_array = new T[other.m_length];
    for (int i = 0; i < other.m_length; i++)
        m_array[i] = other.m_array[i];
    m_length = other.m_length;
}

template<typename T>
unsigned int const Array<T>::getLength() const
{
    return m_length;
}


#endif
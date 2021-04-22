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
        Array<T>& operator=(Array<T> const& other);
        T& operator[](unsigned int i);

        unsigned int const size() const;

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
Array<T>::Array(Array<T> const& copy)
{
    if (this->m_array)
        delete this->m_array;
    this->m_array = new T[copy.m_length];
    for (int i = 0; i < copy.m_length; i++)
        m_array[i] = copy.m_array[i];
    m_length = copy.m_length;
}

template<typename T>
Array<T>& Array<T>::operator=(Array const& other)
{
    if (this != other)
    {
        if (m_array)
            delete (m_array);
        m_array = new T[other.m_length];
        for (int i = 0; i < other.m_length; i++)
            m_array[i] = other.m_array[i];
        m_length = other.m_length;
    }
    return (*this);
}

template<typename T>
T& Array<T>::operator[](unsigned int i)
{
    if (i > m_length)
        throw std::exception();
    return (m_array[i]);
}


template<typename T>
unsigned int const Array<T>::size() const
{
    return m_length;
}



#endif
#include <iostream>
#include "array.hpp"

class Data
{
    public:
        Data(int n = 88) : m_length(n) {}
        bool operator==( Data const& other ) { return (this->m_length == other.m_length); }
        bool operator!=( Data const& other ) { return (this->m_length != other.m_length); }
        bool operator>( Data const& other ) { return (this->m_length > other.m_length); }
        bool operator<( Data const& other ) { return (this->m_length < other.m_length); }
        bool operator>=( Data const& other ) { return (this->m_length >= other.m_length); }
        bool operator<=( Data const& other ) { return (this->m_length <= other.m_length); }
        unsigned int m_length;
};

int main()
{
    Array<char> a;
    Array<char> b(3);

    b[0] = '1';
    b[1] = '2';
    b[2] = '3';

    std::cout << "____________test char__________" << std::endl;
    try
    {
        std::cout << "Size a: " << a.size() << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << "Size b: " << b.size() << std::endl;
        std::cout << "Elem 7 of b: " << b[6] << std::endl; // pas d'acces donc exception
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    for (int i = 0; i < b.size(); i++)
        std::cout << b[i] << std::endl;

    std::cout << "____________test class__________" << std::endl;

    Array<Data> c;
    Array<Data> d(3);

    d[0] = Data(3);
    d[1] = Data(42);
    d[2] = Data(19);
    try
    {
        std::cout << "size c: " << c.size() << std::endl; ; 
        std::cout << "size d: " << d.size() << std::endl; 
        d[5] = Data(21);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
    return (0);
}
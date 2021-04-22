#include <iostream>
#include "whatever.hpp"

// template : utile qd types differents pour une seule notion

// par reference si par ex c'est une instance de class
// pas par copy mais par ref, si grosse classe pas copie une fois par parametre mais passe par adresse on gagne de la memoire
// la fct ne va pas modif les parametre donc const

// template<typename T>
// T const& max(T const& x, T const& y)
// {
//     return(x >= y ? x : y);
// }

// instanciation explicite ou implicite du template

// Specialisation partielle : le premier type est par default un int
// template<typename U>
// class Pair<int, U>

// specialisation complete : les deux sont precises
// template<>
// class Pair<bool, bool>

///////////////////////////////////////////////////////////////////////////////////////////

class Data
{
    public:
        Data(int n) : m_n(n) {}
        int m_n;
        bool operator==( Data const & other ) { return (this->m_n == other.m_n); }
        bool operator!=( Data const & other ) { return (this->m_n != other.m_n); }
        bool operator>( Data const & other ) { return (this->m_n > other.m_n); }
        bool operator<( Data const & other ) { return (this->m_n < other.m_n); }
        bool operator>=( Data const & other ) { return (this->m_n >= other.m_n); }
        bool operator<=( Data const & other ) { return (this->m_n <= other.m_n); }
};

int main()
{
    int x = 5;
    int y = 6;
    int min;
    int max;

    float i = 5.2;
    float j = 6.3;
    float min_float;
    float max_float;

    Data a(5);
    Data b(6);
    Data test_a(0);
    Data test_b(0);

    std::cout << "_________test swap_________" << std::endl;
    swap(x, y);
    std::cout << "X : " << x << "| Y: " << y << std::endl;
    swap(i, j);
    std::cout << "I : " << i << "| J: " << j << std::endl;
    swap(a, b);
    std::cout << "n(a) : " << a.m_n << "| n(b): " << b.m_n << std::endl;

    std::cout << "_________test min_________" << std::endl;
    min = ::min(x, y);  //:: is used to indicate we want the max function from this namespace/file and not form the string lib
    std::cout << min << std::endl;
    min_float = ::min(i, j);
    std::cout << min_float << std::endl;
    test_a = ::min(a, b).m_n;
    std::cout << test_a.m_n << std::endl;

    std::cout << "_________test max_________" << std::endl;
    max = ::max(x, y);  
    std::cout << max << std::endl;
    max_float = ::max(i, j);
    std::cout << max_float << std::endl;
    test_b = ::max(a, b).m_n;
    std::cout << test_b.m_n << std::endl;
}
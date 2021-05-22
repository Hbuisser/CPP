
#include "easyfind.hpp"
#include <vector>
#include <iterator>
#include <list>

// stl : standard template library
// composed of Iterators, containers and algorithms
// algorithms are: sort, search, find etc
// https://www.youtube.com/watch?v=gPH9mlDFbYw


/////////////////////////////////
// containers : 
// std::list<int>   lst1;
// std::map<>
// std::vector<int>  v(42, 100)                             // tableau avec 42 cases qui contiennent toutes 100
// lst1.push_back(42);

//////////////////////////////////
// iterator : (equivalent stl d'un pointeur)
// std::list<int>::const_iterator   i;                          // class imbriquees
// std::list<int>::const_iterator   i_end = lest1.end();        // .end() => on a depasse le dernier element

// for (i = lst1.begin(); i != i_end; ++i)
//        std::cout << *i << std::endl;                         // dereferencer

////////////////////////////////////
// Algoritm : fct preimplementees qui peuvent operer sur des collections
// et effectuer des operations standards
// ex: for_each()

int main()
{
    int array[] = {5, 19, 88, 42};
    int n = sizeof(array) / sizeof(array[0]);  // https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/

    std::vector<int> v_array(array, array + n);
    std::list<int> l_array(array, array + n);
    

    test_easyfind(v_array, 22);
    test_easyfind(l_array, 88);
    return (0);
}
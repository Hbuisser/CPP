#include <iostream>

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

int main()
{
    template<typename T>

}
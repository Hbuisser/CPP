#include <iostream>
#include "Data.hpp"

// cast explicit : rajouter le cast avant
// int a = 42;
// int const *b = (int const *) &a;
// int *e = (int *) b;      // explicit
// int *e = b               // implicit

// 5 types de cast :
// convertion 
// reinterpretation : type precs vers type generique
// chgt de type qualifier
// up et down cast : reinterpretation de class

// static cast:
// int a = 42;
// double b = a;
// int c = static_cast<int>(b);   // demotion, perte de precision

// dynamic cast :
// se passe a l'execution et non a la compilation
// ne fonctionne que dans un cas d'une instance polymorphique 
// (au moins une fct virtuel ou on peut utiliser le dyn cast)
// uniqument dans un down cast (parent a enfant)

bool is_nbr(char c)
{
    if (c >= '0' && c <= '9')
        return true;
    return false;
}

void cast_char(char c)
{
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<int>(c) << ".0" << std::endl;
}

void cast_int(int i)
{
    if (static_cast<char>(i) < 32 || static_cast<char>(i) > 126)
        std::cout << "Char: non displayable" << std::endl;
    else
        std::cout << "Char: " << static_cast<char>(i) << std::endl;
    std::cout << "Int: " << std::endl;
    std::cout << "Float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "Double: " << static_cast<double>(i) << ".0" << std::endl;
}


// Only scalar types, -inff, +inff and nanf are sole accepted pseudo literals
// Scalar type must belong to int, float or double
int main(int argc, char **argv)
{
    std::string arg;
    int i = 0;

    if (argc != 2)
    {
        std::cout << "Not enough arguments" << std::endl;
        return (0);
    }
    arg = argv[1];

    // Char ?
    if (!arg[1] && !is_nbr(arg[0]))
    {
        cast_char(arg[0]);
        return (0);
    }

    // Int ?
    if (arg[0] == '-')
        i++;
    while (is_nbr(arg[i]))
        i++;
    if (arg[i] == '\0')
    {
        cast_int(std::stoi(arg));
        return (0);
    }
    if (arg[i] == '.')
        i++;
    while(arg[i] == '0')
        i++;
    if (arg[i] == '\0')
    {
        cast_int(std::stoi(arg));
        return (0);
    }

    
    return (0);
}
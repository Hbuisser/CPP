#include <iostream>
#include <sstream>

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
        std::cout << "char: non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(i) << std::endl;
    std::cout << "int: " << i << std::endl;
    std::cout << "float: " << static_cast<float>(i) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(i) << ".0" << std::endl;
}

void cast_double(double d)
{
    std::stringstream ss; // https://www.cplusplus.com/reference/sstream/stringstream/stringstream/

	if (static_cast<char>(d) < 32 || static_cast<char>(d) > 126)
		std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(d) << std::endl;
    std::cout << "int: " << static_cast<int>(d) << std::endl;
    ss << static_cast<float>(d); // from string to float
    if (ss.str().find('.') < ss.str().length())
		std::cout << "float: " << ss.str() << "f" << std::endl;
	else
		std::cout << "float: " << ss.str() << ".0f" << std::endl;
    ss.str(std::string());
	ss << d;// from string to double
	if (ss.str().find('.') < ss.str().length())
		std::cout << "double: " << ss.str() << std::endl;
	else
		std::cout << "double: " << ss.str() << ".0" << std::endl;
}

void special_double(double d)
{
    std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
	std::cout << "double: " << d << std::endl;
}

void cast_float(float f)
{
	std::stringstream ss;

	if (static_cast<char>(f) < 32 || static_cast<char>(f) > 126)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	ss << f;
	if (ss.str().find('.') < ss.str().length())
		std::cout << "float: " << ss.str() << "f" << std::endl;
	else
		std::cout << "float: " << ss.str() << ".0f" << std::endl;
	ss.str(std::string());
	ss << static_cast<double>(f);
	if (ss.str().find('.') < ss.str().length())
		std::cout << "double: " << ss.str() << std::endl;
	else
		std::cout << "double: " << ss.str() << ".0" << std::endl;
}

void	special_float(float f)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << f << "f" << std::endl;
	std::cout << "double: " << static_cast<float>(f) << std::endl;
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

    // Double ?
    while (is_nbr(arg[i]))
        i++;
    if (arg[i] == '\0')
    {
        cast_double(std::stod(arg));
        return (0);
    }
    if (arg == "nan" || arg == "inf" || arg == "-inf")
	{
		special_double(std::stod(arg));
		return 0;
	}

    // Float
    if ((arg[i] == 'f' && arg[i + 1] == 0))
	{
		cast_float(std::stof(arg));
		return 0;
	}
	if (arg == "nanf" || arg == "inff" || arg == "-inff")
	{
		special_float(std::stof(arg));
		return 0;
	}
    // Other impossible
    std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: impossible" << std::endl;
	std::cout << "double: impossible" << std::endl;
    return (0);
}
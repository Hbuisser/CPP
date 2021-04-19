#include <iostream>
#include "Bureaucrat.hpp"

//https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1903837-gerez-des-erreurs-avec-les-exceptions

int main()
{
    Bureaucrat henry;
    Bureaucrat frank(henry);

    try
    {
        henry.addGrade(); // doit retourner 149
        Bureaucrat("Henry", 151);
    }
    catch (std::exception const& e)
    {
        std::cerr << "ERROR : " << e.what() << std::endl;
    }
    henry.getGrade();
    std::cout << "________________________" << std::endl;
    try
    {
        henry.minGrade(); // doit retourner 150
        Bureaucrat("Henry", 0);
    }
    catch (std::exception const& e)
    {
        std::cerr << "ERROR : " << e.what() << std::endl;
    }
    henry.getGrade();
    std::cout << "________________________" << std::endl;
    try
    {
        frank.minGrade(); // ne doit pas augmenter a plus de 150
        Bureaucrat("Frank", 0);
    }
    catch (std::exception const& e)
    {
        std::cerr << "ERROR : " << e.what() << std::endl;
    }
    frank.getGrade();
    std::cout << "________________________" << std::endl;
    try
    {
        frank.addGrade(); // doit retourner 149
        Bureaucrat("Frank", 0);
    }
    catch (std::exception const& e)
    {
        std::cerr << "ERROR : " << e.what() << std::endl;
    }
    frank.getGrade();
    return (0);
}
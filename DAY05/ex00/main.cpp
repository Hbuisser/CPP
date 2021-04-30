#include <iostream>
#include "Bureaucrat.hpp"

//https://openclassrooms.com/fr/courses/1894236-programmez-avec-le-langage-c/1903837-gerez-des-erreurs-avec-les-exceptions

int main()
{
    Bureaucrat henry;
    Bureaucrat frank(henry);

    std::cout << "________________________" << std::endl;
    try
    {
        henry.addGrade();
        Bureaucrat("Henry", 151);
    }
    catch (std::exception const& e)
    {
        std::cerr << "ERROR : " << e.what() << std::endl;
    }
    std::cout << henry.getGrade() << std::endl; // doit retourner 149
    std::cout << henry;
    std::cout << "________________________" << std::endl;
    try
    {
        henry.minGrade();
        Bureaucrat("Henry", 0);
    }
    catch (std::exception const& e)
    {
        std::cerr << "ERROR : " << e.what() << std::endl;
    }
    std::cout << henry.getGrade() << std::endl; // doit retourner 150
    std::cout << "________________________" << std::endl;
    try
    {
        frank.minGrade();
        Bureaucrat("Frank", 0);
    }
    catch (std::exception const& e)
    {
        std::cerr << "ERROR : " << e.what() << std::endl;
    }
    std::cout << frank.getGrade() << std::endl; // ne doit pas augmenter a plus de 150
    std::cout << "________________________" << std::endl;
    try
    {
        frank.addGrade();
        Bureaucrat("Frank", 0);
    }
    catch (std::exception const& e)
    {
        std::cerr << "ERROR : " << e.what() << std::endl;
    }
    std::cout << frank.getGrade() << std::endl; // doit retourner 149
    std::cout << "________________________" << std::endl;
    Bureaucrat *bob = new Bureaucrat("Bob", 42);
    std::cout << bob->getGrade() << std::endl; // doit retourner 42
    std::cout << *bob;
    std::cout << "________________________" << std::endl;
    Bureaucrat *boby;
    try
    {
        boby = new Bureaucrat("Boby", 151);
    }
    catch (std::exception const& e)
    {
        std::cerr << "ERROR : " << e.what() << std::endl;
    }
    delete bob;
    delete boby;
    return (0);
}
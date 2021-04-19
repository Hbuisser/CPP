#include <iostream>
#include "Bureaucrat.hpp"

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    std::cout << "___________BUREAUCRAT__________________" << std::endl;
    Bureaucrat bob("Bob", 100);
    std::cout << bob; // 100
    bob.setGrade(150);
    std::cout << bob; // 150

    std::cout << "________________FORM___________________" << std::endl;
    try
    {
        Form papier1("Formulaire", 1, 151);
    }
    catch (std::exception const& e)
    {
        std::cerr << "ERROR : " << e.what() << std::endl;
    }
    try
	{
		Form papier2("Formulaire2", 110, -5);
	}
	catch(const std::exception& e)
	{
		std::cout << "ERROR : " << e.what() << std::endl;
	}
    std::cout << "___________________" << std::endl;
    Form	h_form("Basic");
    std::cout << h_form;
    h_form.beSigned(bob);
    std::cout << "___________________" << std::endl;
	Form	l_form("Presidential Form", 1, 1);
    std::cout << l_form;
	try
	{
		l_form.beSigned(bob);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
    return (0);
}
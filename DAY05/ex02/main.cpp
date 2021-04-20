#include <iostream>
#include "Bureaucrat.hpp"

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void test_bureaucrat(Form &form)
{
	Bureaucrat b("Bob", 150);
	std::cout << b;

	std::cout << b;
	std::cout << "_______Can't sign because of grade" << std::endl;
	try
	{
		form.beSigned(b);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "_______Sign and Execute" << std::endl;
	b.setGrade(1);
	try
	{
		form.beSigned(b);
		b.executeForm(form);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "_______Too low grade" << std::endl;
	try 
	{
		Bureaucrat bLow("Alice", 420);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "_______Too High grade" << std::endl;
	try {
		Bureaucrat bLow("Alice", -20);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test_form(Bureaucrat bob, Form &form)
{
	std::cout << form;
	bob.setGrade(1);
	std::cout << "_______Can't be executed because not signed" << std::endl;
	try
	{
		form.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}
	std::cout << "_______Bureaucrat signs" << std::endl;
	// can't have the name..................................................
	form.beSigned(bob);
	std::cout << "_______Can't be executed because grade is too low" << std::endl;
	bob.setGrade(150);
	try
	{
		form.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}
	std::cout << "_______Can be executed because signed and grade are ok" << std::endl;
	bob.setGrade(1);
	try
	{
		form.execute(bob);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;;
	}
}

int main()
{
    Bureaucrat              bob("Bob");
    ShrubberyCreationForm   s_form("TheS");
	RobotomyRequestForm		r_form("TheR");
	PresidentialPardonForm 	p_form("TheP");

    std::cout << "__________Bureaucrat test______________" << std::endl;
    test_bureaucrat(s_form);

    std::cout << "__________Shrubbery test______________" << std::endl;
	test_form(bob, s_form);

	std::cout << "__________Robotomy test______________" << std::endl;
	test_form(bob, r_form);

	std::cout << "__________Shrubbery test______________" << std::endl;
	test_form(bob, p_form);

    return (0);
}
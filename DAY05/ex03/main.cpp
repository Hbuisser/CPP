#include <iostream>
#include "Bureaucrat.hpp"

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
	std::cout << "_______Bob sign the form" << std::endl;
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

void	test_intern(void)
{
	{
		std::cout << "__________Robotomy Form" << std::endl;
		Intern someRandomIntern;
		Form *rrf;
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		delete rrf;
	}
	{
		std::cout << "__________Shrubbery Form" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		delete rrf;
	}
	{
		std::cout << "__________Presidential Form" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		delete rrf;
	}
	{
		std::cout << "___________Unknown Form" << std::endl;
		Intern someRandomIntern;
		Form* rrf;
		rrf = someRandomIntern.makeForm("unknown", "Bender");
		delete rrf;
	}
}

int main()
{
    Bureaucrat              bob("Bob");
    ShrubberyCreationForm   s_form("TheS");
	RobotomyRequestForm		r_form("TheR");
	PresidentialPardonForm 	p_form("TheP");

    std::cout << "_______________________________Bureaucrat test_____________" << std::endl;
    test_bureaucrat(r_form);

    std::cout << "_______________________________Shrubbery test______________" << std::endl;
	test_form(bob, s_form);

	std::cout << "_______________________________Robotomy test_______________" << std::endl;
	test_form(bob, r_form);

	std::cout << "_______________________________Shrubbery test______________" << std::endl;
	test_form(bob, p_form);

	std::cout << "_______________________________Intern test_________________" << std::endl;
    test_intern();

    return (0);
}
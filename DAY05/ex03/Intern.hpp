
#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
# include <string>

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

struct List
{
	std::string 	name;
	Form 			*(*fct)(std::string);
	//Function pointers, takes the adress of a function
};

class Intern
{
	public:
		Intern();
		Intern(Intern const& copy);
		~Intern();
		Intern& operator=(Intern const& copy);

		Form* makeForm(std::string const& formName, std::string const& targetName);

	private:


};

#endif

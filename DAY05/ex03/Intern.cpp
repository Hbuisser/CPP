
# include "Intern.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Intern::Intern()
{
	
}

// COPY
Intern::Intern(Intern const& copy)
{
	
}

/*
** DESTRUCTOR
*/

Intern::~Intern()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Intern& Intern::operator=(Intern const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

Form *RobotomyRequestFormFct(std::string target)
{
	return (new RobotomyRequestForm(target));
}

Form *ShrubberyCreationFormFct(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

Form *PresidentialPardonFormFct(std::string target)
{
	return (new PresidentialPardonForm(target));
}

Form *Intern::makeForm(std::string const& formName, std::string const& targetName)
{
	List request[3];

	request[0].name = "robotomy request";
	request[0].fct = &RobotomyRequestFormFct;
	request[1].name = "shrubbery creation";
	request[1].fct = &ShrubberyCreationFormFct;
	request[2].name = "presidential pardon";
	request[2].fct = &PresidentialPardonFormFct;

	for (int i = 0; i < 3; i++)
	{
		if (formName == request[i].name)
		{
			std::cout << "Intern creates " << request[i].name << " form" << std::endl;
			return (request[i].fct(targetName));
		}
	}
	std::cout << "Unknown form" << std::endl;
	return (0);
}
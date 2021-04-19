
# include "Bureaucrat.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Bureaucrat::Bureaucrat(std::name name, int grade) : m_name(name), m_grade(grade)
{
	if (grade < 1)
		return Bureaucrat::GradeTooLowException();
	else if (grade > 150)
		return Bureaucrat::GradeTooHighException();
}

// COPY
Bureaucrat::Bureaucrat(Bureaucrat const& copy)
{
	
}

/*
** DESTRUCTOR
*/

Bureaucrat::~Bureaucrat()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Bureaucrat& Bureaucrat::operator=(Bureaucrat const& copy)
{
	if (this != &copy)
	{
		
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void Bureaucrat::GradeTooHighException()
{

}

void Bureaucrat::GradeTooLowException()
{

}
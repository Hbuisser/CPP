
# include "Bureaucrat.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT

// Bureaucrat::Bureaucrat()
// {
// 	m_grade = 150;
// }

Bureaucrat::Bureaucrat(const std::string name, int grade) : m_name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		m_grade = grade;
}

// COPY
Bureaucrat::Bureaucrat(Bureaucrat const& copy)
{
	m_grade = copy.m_grade;
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

void Bureaucrat::addGrade(void)
{
	if (m_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		m_grade--;
}

void Bureaucrat::minGrade(void)
{
	if (m_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		m_grade++;
}

/*
** EXCEPTION FUNCTIONS
*/

void Bureaucrat::getGrade()
{
	std::cout << m_grade << std::endl;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is bigger than 150");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is lower than 1");
}
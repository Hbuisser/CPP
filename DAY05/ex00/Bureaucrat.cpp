
# include "Bureaucrat.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Bureaucrat::Bureaucrat() : m_name("No_name")
{
	this->m_grade = 150;
}

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
Bureaucrat::Bureaucrat(Bureaucrat const& copy) : m_name(copy.m_name)
{
	this->m_grade = copy.m_grade;
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
		(std::string)this->m_name = copy.m_name;
		this->m_grade = copy.m_grade;
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

void Bureaucrat::setGrade(int grade)
{
	m_grade = grade;
}

int Bureaucrat::getGrade(void) const
{
	return (m_grade);
}

const std::string Bureaucrat::getName(void) const
{
	return (m_name);
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is bigger than 150");
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is lower than 1");
}

////////////////////////////////////////////////////////////////////////////////////////

void operator<<(std::ostream &stream, Bureaucrat const &b)
{
    stream << b.getName() << " bureaucrat, grade " << b.getGrade() << "." << std::endl;
}
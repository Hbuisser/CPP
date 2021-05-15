
# include "Form.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
Form::Form() : m_name("No_name"), m_signed(false), m_grade_sign(1), m_grade_exec(1)
{

}

Form::Form(std::string name, int a_grade_sign, int a_grade_exec) : 
m_name(name), m_grade_sign(a_grade_sign), m_grade_exec(a_grade_exec)
{
	m_signed = false;
	if (m_grade_exec > 150 || m_grade_sign > 150)
		throw Form::GradeTooLowException();
	else if (m_grade_exec < 1 || m_grade_sign < 1)
		throw Form::GradeTooHighException();
}

// COPY
Form::Form(Form const& copy) :
m_name(copy.m_name), m_signed(copy.m_signed), m_grade_sign(copy.m_grade_sign), m_grade_exec(copy.m_grade_exec)
{
	
}

/*
** DESTRUCTOR
*/

Form::~Form()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
Form& Form::operator=(Form const& copy)
{
	if (this != &copy)
	{
		m_signed = copy.m_signed;
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

void Form::beSigned(Bureaucrat const& officer)
{
	if (officer.getGrade() <= m_grade_sign)
	{
		m_signed = true;
		officer.signForm(true, *this);
	}
	else
	{
		officer.signForm(false, *this);
		throw Form::GradeTooLowException();
	}
}

int Form::getGradeSign(void) const
{
	return (m_grade_sign);
}

int Form::getGradeExec(void) const
{
	return (m_grade_exec);
}

const std::string Form::getName(void) const
{
	return (m_name);
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low");
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too big");
}

///////////////

void operator<<(std::ostream &stream, Form const &f)
{
    stream << f.getName() << " form, grade sign " << f.getGradeSign() << " | grade exec " << f.getGradeExec() << std::endl;
}
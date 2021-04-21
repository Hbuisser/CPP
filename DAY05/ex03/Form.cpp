
# include "Form.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
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
m_name(copy.m_name), m_grade_sign(copy.m_grade_sign), m_grade_exec(copy.m_grade_exec)
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

const char *Form::NotSignedException::what() const throw()
{
	return ("Form is not signed");
}

bool Form::verifBureaucratCanExecute(Bureaucrat const& exec) const
{
	if (exec.getGrade() <= m_grade_exec)
		return (true);
	else
	{
		throw Form::GradeTooLowException();
		return (false);
	}
}

bool Form::verifIfSigned() const
{
	if (m_signed)
		return (true);
	else
	{
		throw Form::NotSignedException();
		return (false);
	}
}

///////////////

void operator<<(std::ostream &stream, Form const &f)
{
    stream << f.getName() << " form, grade sign " << f.getGradeSign() << " | grade exec " << f.getGradeExec() << std::endl;
}

# include "RobotomyRequestForm.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
RobotomyRequestForm::RobotomyRequestForm(std::string const& target) :
Form("RobotomyRequestForm", 72, 45), m_target(target)
{
	
}

// COPY
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const& copy) :
Form(copy)
{
	
}

/*
** DESTRUCTOR
*/

RobotomyRequestForm::~RobotomyRequestForm()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm const& copy)
{
	if (this != &copy)
	{
		
	}
	Form::operator=(copy);
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

std::string const& RobotomyRequestForm::getTarget() const
{
	return m_target;
}

void RobotomyRequestForm::execute(Bureaucrat const& executor) const
{
	if (verifBureaucratCanExecute(executor) && verifIfSigned())
	{
		int i = std::rand() % 2;
		if (i > 0)
			std::cout << "SHRRRRRRRAaaaaaaaakkkk... " << getTarget() << " has been robotomized" << std::endl;
		else
			std::cout << "SHRRRRRRRAaaaaaaaakkkk... " << getTarget() << " has not been robotomized" << std::endl;
 	}
}

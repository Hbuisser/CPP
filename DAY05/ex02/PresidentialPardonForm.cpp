
# include "PresidentialPardonForm.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
PresidentialPardonForm::PresidentialPardonForm(std::string const& target) :
Form("PresidentialPardonForm", 145, 137), m_target(target)
{
	
}

// COPY
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const& copy) :
Form(copy)
{
	
}

/*
** DESTRUCTOR
*/

PresidentialPardonForm::~PresidentialPardonForm()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const& copy)
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

std::string const& PresidentialPardonForm::getTarget() const
{
	return m_target;
}

void PresidentialPardonForm::execute(Bureaucrat const& executor) const
{
	if (verifBureaucratCanExecute(executor) && verifIfSigned())
	{
		std::cout << getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
	}
}
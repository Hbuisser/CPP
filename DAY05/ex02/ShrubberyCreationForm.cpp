
# include "ShrubberyCreationForm.hpp"

/*
** CONSTRUCTORS
*/

// DEFAULT
ShrubberyCreationForm::ShrubberyCreationForm(std::string const& target) : 
m_target(target), Form("ShrubberyCreationForm", 145, 137)
{
	
}

// COPY
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const& copy) : 
Form(copy)
{
	
}

/*
** DESTRUCTOR
*/

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	
}

/*
** OPERATORS
*/

// ASSIGNATION
ShrubberyCreationForm& ShrubberyCreationForm::operator=(ShrubberyCreationForm const& copy)
{
	if (this != &copy)
	{
		Form::operator=(copy);
	}
	return *this;
}

/*
** MEMBER FUNCTIONS
*/

std::string const& ShrubberyCreationForm::getTarget() const
{
	return m_target;
}

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const
{
	if (verifBureaucratCanExecute(executor) && verifIfSigned())
	{
		std::string nameFile;
		nameFile = getTarget() + "_shrubbery";

		std::ofstream fileFlux(nameFile.c_str());
		if (fileFlux)
		{
			fileFlux << "      /\\      " << std::endl; 
			fileFlux << "     /\\*\\     " << std::endl; 
			fileFlux << "    /\\O\\*\\    " << std::endl; 
			fileFlux << "   /*/\\/\\/\\   " << std::endl; 
			fileFlux << "  /\\O\\/\\*\\/\\  " << std::endl; 
			fileFlux << " /\\*\\/\\*\\/\\/\\ " << std::endl; 
			fileFlux << "/\\O\\/\\/*/\\/O/\\" << std::endl; 
			fileFlux << "      ||      " << std::endl; 
			fileFlux << "      ||      " << std::endl; 
			fileFlux << "      ||      " << std::endl; 
		}
	}
}
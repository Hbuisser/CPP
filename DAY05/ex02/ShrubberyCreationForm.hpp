
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <string>
# include <fstream>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string const& target = "Target");
		ShrubberyCreationForm(ShrubberyCreationForm const& copy);
		virtual ~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(ShrubberyCreationForm const& copy);

		virtual void execute(Bureaucrat const& executor) const;
		std::string const& getTarget() const;

	private:
		std::string const m_target;
};

#endif


#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>

#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string const& target = "Target");
		PresidentialPardonForm(PresidentialPardonForm const& copy);
		virtual ~PresidentialPardonForm();
		PresidentialPardonForm& operator=(PresidentialPardonForm const& copy);

		virtual void execute(Bureaucrat const& executor) const;
		std::string const& getTarget() const;

	private:
		std::string const m_target;

};

#endif

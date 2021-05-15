
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <string>

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string const& target = "Target");
		RobotomyRequestForm(RobotomyRequestForm const& copy);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(RobotomyRequestForm const& copy);

		void execute(Bureaucrat const& executor) const;
		std::string const& getTarget() const;

	private:
		std::string const m_target;

};

#endif

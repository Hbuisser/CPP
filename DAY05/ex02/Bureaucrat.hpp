
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

# include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const std::string name = "Default", int grade = 150);
		Bureaucrat(Bureaucrat const& copy);
		~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat const& copy);

		const std::string getName(void) const;
		int getGrade(void) const;
		void setGrade(int grade);

		void addGrade(void);
		void minGrade(void);

		void signForm(bool bo, Form & f) const;
		void executeForm(Form const& form) const;

		class GradeTooHighException : public std::exception
		{
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				const char *what() const throw();
		};

	protected:
		const std::string 		m_name;
		int					m_grade;

};

void operator<<(std::ostream &stream, Bureaucrat const &b);

#endif

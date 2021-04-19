
#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(std::string name = "Default form", int a_grade_sign = 150, int a_grade_exec = 150);
		Form(Form const& copy);
		~Form();
		Form& operator=(Form const& copy);

		const std::string getName(void) const;
		int getGradeSign(void) const;
		int getGradeExec(void) const;

		void beSigned(Bureaucrat const& officer);

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

	private:
		const std::string 	m_name;
		bool 				m_signed;
		const int 			m_grade_sign;
		const int 			m_grade_exec;
};

void operator<<(std::ostream &stream, Form const &f);

#endif

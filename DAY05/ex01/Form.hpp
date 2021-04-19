
#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>

class Form
{
	public:
		Form();
		Form(std::string name, int a_grade_sign, int a_grade_exec);
		Form(Form const& copy);
		~Form();
		Form& operator=(Form const& copy);

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

#endif

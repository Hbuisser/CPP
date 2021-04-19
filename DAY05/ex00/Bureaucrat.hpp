
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	public:
		//Bureaucrat();
		Bureaucrat(const std::string name = "Default", int grade = 150);
		Bureaucrat(Bureaucrat const& copy);
		~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat const& copy);

		const std::string getName(void) const;
		int getGrade(void) const;

		void addGrade(void);
		void minGrade(void);
		void getGrade();

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
		const std::string 	m_name;
		int					m_grade;

};

#endif

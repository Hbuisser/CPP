
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(Bureaucrat const& copy);
		~Bureaucrat();
		Bureaucrat& operator=(Bureaucrat const& copy);

		void GradeTooHighException();
		void GradeTooLowException();

		const std::string getName(void) const;
		int getGrade(void) const;

		void 

	private:
		const std::string 	m_name;
		int					m_grade;

};

#endif

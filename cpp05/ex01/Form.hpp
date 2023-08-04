#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const	std::string name;
		bool	is_signed;
		int		grade_to_be_signed;
		int		grade_to_be_executed;

	public:
		Form();
		Form(std::string name, int signedGrade, int executedGrade);
		Form(const Form & obj);
		Form & operator=(const Form & obj);
		~Form();

		void setGradeToBeSigned(int grade);
		void setGradeToBeExecuted(int grade);

		std::string	getName() const ;
		bool		getIsSigned() const ;
		int			getGRadeToBeSigned() const ;
		int			getGRadeToBeExecuted() const ;

		void		beSigned(const Bureaucrat & obj);
		void		signForm(const Bureaucrat & obj);

		class GradeTooHighException : std::exception {
			public:
				const char * what() throw();
		};

		class GradeTooLowException : std::exception {
			public:
				const char * what() throw();
		};
};

std::ostream & operator<<(std::ostream & os, const Form & obj);

#endif

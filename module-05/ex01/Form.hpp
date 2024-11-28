#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Form
{
	private:
		const std::string	name;
		bool				is_signed;
		const int 			grade_to_be_signed;
		const int			grade_to_be_executed;

	public:
		Form();
		Form(std::string name, int signedGrade, int executedGrade);
		Form(const Form & obj);
		Form & operator=(const Form & obj);
		~Form();

		std::string	getName() const ;
		bool		getIsSigned() const ;
		int			getGRadeToBeSigned() const ;
		int			getGRadeToBeExecuted() const ;

		void		setIsSigned(bool b);
		void		beSigned(Bureaucrat & obj);

		class GradeTooHighException : public std::exception {
			public:
				const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char * what() const throw();
		};
};

std::ostream & operator<<(std::ostream & os, const Form & obj);

#endif

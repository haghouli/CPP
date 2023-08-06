/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:54:31 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/06 11:43:17 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"

class AForm
{
	protected:
		const	std::string name;
		bool	is_signed;
		int		grade_to_be_signed;
		int		grade_to_be_executed;
		void setGradeToBeSigned(int grade);
		void setGradeToBeExecuted(int grade);

	public:
		AForm();
		AForm(std::string name, int signedGrade, int executedGrade);
		AForm(const AForm & obj);
		AForm & operator=(const AForm & obj);
		virtual ~AForm() = 0;

		std::string	getName() const ;
		bool		getIsSigned() const ;
		int			getGRadeToBeSigned() const ;
		int			getGRadeToBeExecuted() const ;

		void		beSigned(const Bureaucrat & obj);
		void		signForm(const Bureaucrat & obj);

		bool		execute(Bureaucrat const & executor) const;

		class GradeTooHighException : std::exception {
			public:
				const char * what() const throw();
		};

		class GradeTooLowException : std::exception {
			public:
				const char * what() const throw();
		};
};

std::ostream & operator<<(std::ostream & os, const AForm & obj);

#endif

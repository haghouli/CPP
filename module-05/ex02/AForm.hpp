/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:54:31 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/18 08:26:46 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include "Bureaucrat.hpp"

class AForm
{
	protected:
		const			std::string name;
		bool			is_signed;
		const int		grade_to_be_signed;
		const int		grade_to_be_executed;

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

		void		setIsSigned(bool b);

		void		beSigned(Bureaucrat & obj);
		virtual void		execute(Bureaucrat const & executor) const = 0;

		class GradeTooHighException : public std::exception {
			public:
				const char * what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char * what() const throw();
		};
};

std::ostream & operator<<(std::ostream & os, const AForm & obj);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:49:36 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/18 08:29:38 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class AForm;

class Bureaucrat
{
	private:
		const	std::string name;
		int		grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat & obj);
		Bureaucrat & operator=(const Bureaucrat & obj);
		~Bureaucrat();

		std::string getName() const;
		int			getGrade() const;
		void		setGrade(int grade);

		void		increment();
		void		decrement();

		class GradeTooHighException : public std::exception {
			public:
				const char *	what() const throw();
		};

		class GradeTooLowException : public std::exception {
			public:
				const char *	what() const throw();
		};

		void	signForm(AForm & obj);
		void	executeForm(AForm const & form) const;
};

std::ostream & operator<<(std::ostream & os, const Bureaucrat & obj);

#endif

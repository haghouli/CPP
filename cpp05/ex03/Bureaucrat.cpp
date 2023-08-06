/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:03:17 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/06 09:16:01 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char * Bureaucrat::GradeTooHighException::what() const throw() {
	return ("Grade Too Hight");
}

const char * Bureaucrat::GradeTooLowException::what() const throw() {
	return ("Grade Too Low");
}

Bureaucrat::Bureaucrat() : name("Unknown"), grade(150) { }

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	setGrade(grade);
}

Bureaucrat::Bureaucrat(const Bureaucrat & obj) {
	*this = obj;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & obj) {
	if(this == &obj)
		return *this;
	setGrade(obj.grade);
	return *this;
}

std::string	Bureaucrat::getName() const {
	return name;
}

int	Bureaucrat::getGrade() const {
	return grade;
}

void	Bureaucrat::setGrade(int grade) {
	try {
		if(grade < 1)
			throw GradeTooHighException();
		else if(grade > 150)
			throw GradeTooLowException();
		else
			this->grade = grade;
	} catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::increment() {
	int grade = this->grade - 1;
	setGrade(grade);
}	

void	Bureaucrat::decrement() {
	int grade = this->grade + 1;
	setGrade(grade);
}

Bureaucrat::~Bureaucrat() { }


void	Bureaucrat::executeForm(AForm const & form) {
	try {
		if(!form.execute(*this));
		else
			std::cout << name << " executed " << form.getName() << std::endl;
	}
	catch (const char * msg) {
		std::cout << msg << std::endl;
	} catch (AForm::GradeTooLowException & e) {
		std::cout << e.what() << std::endl;
	}
}

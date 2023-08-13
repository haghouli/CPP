/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 11:03:17 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/13 09:26:51 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"


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
	if(grade < 1)
		throw GradeTooHighException();
	else if(grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
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

void	Bureaucrat::signForm(Form & obj) {
	if(obj.getIsSigned())
		std::cout << name + " couldn’t sign " + obj.getName() + " because the form is already signed" << std::endl;
	else {
		obj.setIsSigned(true);
		std::cout << name << " signed " << obj.getName() << std::endl;
	}
}

std::ostream & operator<<(std::ostream & os, const Bureaucrat & obj) {
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return os;
}

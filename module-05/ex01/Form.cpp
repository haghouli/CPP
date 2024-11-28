/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:59:31 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/13 10:32:57 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char * Form::GradeTooHighException::what() const throw() {
	return "Grade to Hight";
}

const char * Form::GradeTooLowException::what() const throw() {
	return "Grade to Low";
}

Form::Form() : name("unamed"), is_signed(false), grade_to_be_signed(150), grade_to_be_executed(150) { }

Form::Form(std::string name, int signeGrade, int executedGrade) : name(name) , is_signed(false), grade_to_be_signed(signeGrade), grade_to_be_executed(executedGrade) {
	if(grade_to_be_executed > 150 || grade_to_be_signed > 150)
		throw GradeTooLowException();
	else if(grade_to_be_executed < 1 || grade_to_be_signed < 1)
		throw GradeTooHighException();
}

Form::Form(const Form & obj) : name(obj.name) , is_signed(false),grade_to_be_signed(obj.grade_to_be_signed), grade_to_be_executed(obj.grade_to_be_executed){
	*this = obj;	
}

Form & Form::operator=(const Form & obj) {
	if(this == &obj)
		return *this;
	is_signed = obj.is_signed;
	return *this;
}

Form::~Form() { }

std::string	Form::getName() const {
	return name;
};

bool	Form::getIsSigned() const {
	return is_signed;
};

int	Form::getGRadeToBeSigned() const {
	return grade_to_be_signed;
};

int			Form::getGRadeToBeExecuted() const {
	return grade_to_be_executed;
};

void		Form::setIsSigned(bool b) {
	is_signed = b;
}

void	Form::beSigned(Bureaucrat & obj) {
	if(obj.getGrade() > grade_to_be_signed)
		throw Form::GradeTooLowException();
	obj.signForm(*this);
}

std::ostream & operator<<(std::ostream & os, const Form & obj) {
	os << "Form name : " << obj.getName() << std::endl
	<< "signed status : "<< obj.getIsSigned() << std::endl
	<< "required grade to be signed : " << obj.getGRadeToBeSigned() << std::endl
	<< "required grade to be executed : " << obj.getGRadeToBeExecuted() << std::endl;
	return os;
}
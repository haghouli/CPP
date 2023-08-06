/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:59:31 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/05 19:59:33 by haghouli         ###   ########.fr       */
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

Form::Form(std::string name, int signeGrade, int executedGrade) : name(name) , is_signed(false) {
	setGradeToBeSigned(signeGrade);
	setGradeToBeExecuted(executedGrade);
}

Form::Form(const Form & obj) {
	*this = obj;	
}

Form & Form::operator=(const Form & obj) {
	if(this == &obj)
		return *this;
	is_signed = obj.is_signed;
	grade_to_be_signed = obj.grade_to_be_signed;
	grade_to_be_executed = obj.grade_to_be_executed;
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

void	Form::setGradeToBeSigned(int grade) {
	try {
		if(grade > 150)
			throw Form::GradeTooLowException();
		else if(grade < 1)
			throw Form::GradeTooHighException();
		else
			grade_to_be_signed = grade;
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void	Form::setGradeToBeExecuted(int grade) {
	try {
		if(grade > 150)
			throw Form::GradeTooLowException();
		else if(grade < 1)
			throw Form::GradeTooHighException();
		else
			grade_to_be_executed = grade;
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}


void	Form::beSigned(const Bureaucrat & obj) {
	try {
		if(obj.getGrade() > grade_to_be_signed)
			throw Form::GradeTooLowException();
		else {
			signForm(obj);
		}
	}
	catch(Form::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::string & msg) {
		std::cout << msg << std::endl;
	}
}

void	Form::signForm(const Bureaucrat & obj) {
	if(is_signed)
		throw (obj.getName() + " couldn’t sign " + name + " because the form is already signed");
	else {
		is_signed = true;
		std::cout << obj.getName() << " signed " << name << std::endl;
	}
}

std::ostream & operator<<(std::ostream & os, const Form & obj) {
	os << "Form name : " << obj.getName() << std::endl
	<< "signed status : "<< obj.getIsSigned() << std::endl
	<< "required grade to be signed : " << obj.getGRadeToBeSigned() << std::endl
	<< "required grade to be executed : " << obj.getGRadeToBeExecuted() << std::endl;
	return os;
}
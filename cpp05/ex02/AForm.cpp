/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:54:40 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/06 09:03:00 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

const char * AForm::GradeTooHighException::what() const throw() {
	return "Grade to Hight";
}

const char * AForm::GradeTooLowException::what() const throw() {
	return "Grade to Low";
}

AForm::AForm() : name("unamed"), is_signed(false), grade_to_be_signed(150), grade_to_be_executed(150) { }

AForm::AForm(std::string name, int signeGrade, int executedGrade) : name(name) , is_signed(false) {
	setGradeToBeSigned(signeGrade);
	setGradeToBeExecuted(executedGrade);
}

AForm::AForm(const AForm & obj) {
	*this = obj;	
}

AForm & AForm::operator=(const AForm & obj) {
	if(this == &obj)
		return *this;
	is_signed = obj.is_signed;
	grade_to_be_signed = obj.grade_to_be_signed;
	grade_to_be_executed = obj.grade_to_be_executed;
	return *this;
}

AForm::~AForm() { }

std::string	AForm::getName() const {
	return name;
};

bool	AForm::getIsSigned() const {
	return is_signed;
};

int	AForm::getGRadeToBeSigned() const {
	return grade_to_be_signed;
};

int			AForm::getGRadeToBeExecuted() const {
	return grade_to_be_executed;
};

void	AForm::setGradeToBeSigned(int grade) {
	try {
		if(grade > 150)
			throw AForm::GradeTooLowException();
		else if(grade < 1)
			throw AForm::GradeTooHighException();
		else
			grade_to_be_signed = grade;
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}

void	AForm::setGradeToBeExecuted(int grade) {
	try {
		if(grade > 150)
			throw AForm::GradeTooLowException();
		else if(grade < 1)
			throw AForm::GradeTooHighException();
		else
			grade_to_be_executed = grade;
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}
}


void	AForm::beSigned(const Bureaucrat & obj) {
	try {
		if(obj.getGrade() > grade_to_be_signed)
			throw AForm::GradeTooLowException();
		else {
			signForm(obj);
		}
	}
	catch(AForm::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (const std::string & msg) {
		std::cout << msg << std::endl;
	}
}

void	AForm::signForm(const Bureaucrat & obj) {
	if(is_signed)
		throw (obj.getName() + " couldn’t sign " + name + " because the AForm is already signed");
	else {
		is_signed = true;
		std::cout << obj.getName() << " signed " << name << std::endl;
	}
}

bool		AForm::execute(Bureaucrat const & executor) const {
	if(!is_signed)
		throw "The form Should be signed first";
	if(grade_to_be_executed < executor.getGrade())
		throw AForm::GradeTooLowException();
	else
		return true;
	return false;
}

std::ostream & operator<<(std::ostream & os, const AForm & obj) {
	os << "AForm name : " << obj.getName() << std::endl
	<< "signed status : "<< obj.getIsSigned() << std::endl
	<< "required grade to be signed : " << obj.getGRadeToBeSigned() << std::endl
	<< "required grade to be executed : " << obj.getGRadeToBeExecuted() << std::endl;
	return os;
}

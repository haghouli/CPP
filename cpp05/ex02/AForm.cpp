/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 18:54:40 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/13 10:35:15 by haghouli         ###   ########.fr       */
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

AForm::AForm(std::string name, int signeGrade, int executedGrade) : name(name) , is_signed(false), grade_to_be_signed(signeGrade), grade_to_be_executed(executedGrade) {
	if(grade_to_be_executed > 150 || grade_to_be_signed > 150)
		throw GradeTooLowException();
	else if(grade_to_be_executed < 1 || grade_to_be_signed < 1)
		throw GradeTooHighException();
}

AForm::AForm(const AForm & obj) : name(obj.name) , is_signed(false),grade_to_be_signed(obj.grade_to_be_signed), grade_to_be_executed(obj.grade_to_be_executed){
	*this = obj;	
}

AForm & AForm::operator=(const AForm & obj) {
	if(this == &obj)
		return *this;
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

void		AForm::setIsSigned(bool b) {
	is_signed = b;
}

void	AForm::beSigned(Bureaucrat & obj) {
	if(obj.getGrade() > grade_to_be_signed)
		throw AForm::GradeTooLowException();
	obj.signForm(*this);
}


void		AForm::execute(Bureaucrat const & executor) const {
	if(!is_signed)
		throw "The form Should be signed first";
	if(grade_to_be_executed < executor.getGrade())
		throw AForm::GradeTooLowException();
}

std::ostream & operator<<(std::ostream & os, const AForm & obj) {
	os << "Form name : " << obj.getName() << std::endl
	<< "signed status : "<< obj.getIsSigned() << std::endl
	<< "required grade to be signed : " << obj.getGRadeToBeSigned() << std::endl
	<< "required grade to be executed : " << obj.getGRadeToBeExecuted() << std::endl;
	return os;
}
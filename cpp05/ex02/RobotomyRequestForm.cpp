/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 09:20:04 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/13 11:24:30 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45) { };

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45) {
	this->target = target;
};

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & obj) {
	*this = obj;
};

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & obj) {
	if(this == &obj)
		return *this;
	is_signed = obj.is_signed;
	return *this;
}

void		RobotomyRequestForm::execute(Bureaucrat const & executor) const {
	if(!is_signed)
		throw "The form Should be signed first";
	if(grade_to_be_executed < executor.getGrade())
		throw AForm::GradeTooLowException();
	srand(time(0));
	if(rand() % 2)
		std::cout << target << " Has been robotomized successfully" << std::endl;
	else
		std::cout << "The robotomy failed" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() { }

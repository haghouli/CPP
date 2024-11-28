/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:12:40 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/18 09:28:45 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) { };

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) {
	this->target = target;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj) : AForm(obj) {
	*this = obj;
};

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & obj) {
	if(this == &obj)
		return *this;
	target = obj.target;
	is_signed = obj.is_signed;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() { }

void		 PresidentialPardonForm::execute(Bureaucrat const & executor) const {
	if(!is_signed)
		throw "The form Should be signed first";
	if(grade_to_be_executed < executor.getGrade())
		throw AForm::GradeTooLowException();
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}

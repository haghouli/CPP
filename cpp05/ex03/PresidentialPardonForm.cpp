/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 10:12:40 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/06 10:15:52 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5) { };

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) {
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & obj) {
	*this = obj;
};

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & obj) {
	if(this == &obj)
		return *this;
	is_signed = obj.is_signed;
	grade_to_be_signed = obj.grade_to_be_signed;
	grade_to_be_executed = obj.grade_to_be_executed;
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() { }

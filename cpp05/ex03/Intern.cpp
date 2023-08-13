/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:47:16 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/13 07:51:35 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() { };

Intern::Intern(const Intern & obj) { (void)obj; };

Intern & Intern::operator=(const Intern & obj) {
    (void)obj;
    return *this;
};

Intern::~Intern() { };

AForm * Intern::shrubberyCreation(std::string target) {
    return new ShrubberyCreationForm(target);
}

AForm * Intern::robotomyRequest(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm * Intern::presidentialPardon(std::string target) {
    return new PresidentialPardonForm(target);
}

AForm *	Intern::makeForm(std::string formName, std::string target) {
    
    std::string requests[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (Intern::*forms[3])(std::string) = {&Intern::shrubberyCreation, &Intern::robotomyRequest, &Intern::presidentialPardon};

    for(int i = 0; i < 3; i++) {
        if(requests[i] == formName)
            return (this->*forms[i])(target);
    }
    throw "Invalid form";
    return NULL;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:47:16 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/12 11:31:30 by haghouli         ###   ########.fr       */
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

AForm *	Intern::makeForm(std::string formName, std::string target) {
    AForm *form;

    try {
        if(formName != "shrubbery creation")
        {
            try {
                if(formName != "robotomy request")
                {
                    try {
                        if(formName != "presidential pardon")
                            throw "Invalid Form";
                        form = new  PresidentialPardonForm(target);
                        std::cout << "Intern creates " <<  form->getName() << std::endl;
                        return form;
                    } catch(const char * msg) {
                        throw;
                    }
                }
                form = new  RobotomyRequestForm(target);
                std::cout << "Intern creates " <<  form->getName() << std::endl;
                return form;
            } catch(const char * msg) {
                throw;
            }
        }
        form = new  ShrubberyCreationForm(target);
        std::cout << "Intern creates " <<  form->getName() << std::endl;
        return form;
    } catch(const char * msg) {
        throw;
    }
    return NULL;
}

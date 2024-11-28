/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 11:47:11 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/17 11:25:04 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{	
	private:
		AForm * shrubberyCreation(std::string target);
		AForm * robotomyRequest(std::string target);
		AForm * presidentialPardon(std::string target);
	public:
		Intern();
		Intern(const Intern & obj);
		Intern & operator=(const Intern & obj);
		~Intern();

	
		AForm *	makeForm(std::string formName, std::string target);
};

#endif

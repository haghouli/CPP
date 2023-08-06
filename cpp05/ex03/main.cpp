/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:36:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/06 11:43:46 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	{
		ShrubberyCreationForm sh("Home");
		Bureaucrat b1("Bureaucrat_1", 120);

		sh.beSigned(b1);
		b1.executeForm(sh);
	}

	std::cout << "*********************************" << std::endl;
	{
		RobotomyRequestForm rb("Home");
		Bureaucrat b1("Bureaucrat_1", 120);

		rb.beSigned(b1);
		b1.executeForm(rb);
	}

	std::cout << "*********************************" << std::endl;
	{
		PresidentialPardonForm pr("Home");
		Bureaucrat b1("Bureaucrat_1", 120);

		pr.beSigned(b1);
		b1.executeForm(pr);
	}
}

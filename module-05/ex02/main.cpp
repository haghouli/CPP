/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:36:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/18 09:21:11 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	{
		try {
			ShrubberyCreationForm sh("Home");
			Bureaucrat b1("Bureaucrat_1", 120);

			sh.beSigned(b1);
			b1.executeForm(sh);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		} catch(const char * msg) {
			std::cout << msg << std::endl;
		}
	}

	std::cout << "*********************************" << std::endl;
	{
		try {
			RobotomyRequestForm rb("Home");
			Bureaucrat b1("Bureaucrat_1", 120);

			rb.beSigned(b1);
			b1.executeForm(rb);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		} catch(const char * msg) {
			std::cout << msg << std::endl;
		}
	}

	std::cout << "*********************************" << std::endl;
	{
		try {
			PresidentialPardonForm pr("Home");
			Bureaucrat b1("Bureaucrat_1", 120);

			pr.beSigned(b1);
			b1.executeForm(pr);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		} catch(const char * msg) {
			std::cout << msg << std::endl;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:36:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/18 07:47:07 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	{
		try {
			Bureaucrat	b1("Bureaucrat_1", 5);

			std:: cout << b1 << std::endl;
		} catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "**************************" << std::endl;
	{
		try {
			Bureaucrat	b1("Bureaucrat_1", 0);
			std:: cout << b1 << std::endl;
		} catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "**************************" << std::endl;
	{
		try {
			Bureaucrat	b1("Bureaucrat_1", 151);

			std:: cout << b1 << std::endl;
		} catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "**************************" << std::endl;
	{
		try {
			Bureaucrat	b1("Bureaucrat_1", 1);
			b1.increment();
			std:: cout << b1 << std::endl;

		} catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "**************************" << std::endl;
	{
		try {
			Bureaucrat	b1("Bureaucrat_1", 150);
			b1.decrement();
			std:: cout << b1 << std::endl;

		} catch(std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}

}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:36:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/18 07:57:30 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void) {
	{
		try {
			Bureaucrat b1("Bureaucrat_1", 5);

			Form f1("Form1", 10, 5);
			std::cout << f1 << std::endl;
			f1.beSigned(b1);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "*******************" << std::endl;
	{
		try {
			Bureaucrat b1("Bureaucrat_1", 5);

			Form f1("Form1", 200, 1);
			std::cout << f1 << std::endl;
			f1.beSigned(b1);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "*******************" << std::endl;
	{
		try {
			Bureaucrat b1("Bureaucrat_1", 90);

			Form f1("Form1", 10, 5);
			std::cout << f1 << std::endl;
			f1.beSigned(b1);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
	std::cout << "*******************" << std::endl;
	{
		try {
			Bureaucrat b1("Bureaucrat_1", 5);

			Form f1("Form1", 10, 5);
			std::cout << f1 << std::endl;
			f1.beSigned(b1);
			f1.beSigned(b1);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicham <hicham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:36:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/02 16:29:33 by hicham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main(void) {
	
	Bureaucrat b1("Bureaucrat_1", 20);
	Bureaucrat b2("Bureaucrat_2", 1);
	Bureaucrat b3("Bureaucrat_3", 50);

	Form f1("Form1", 12, 12);
	Form f2("Form2", 5, 1);

	std::cout << f1 << std::endl;
	std::cout << f2 << std::endl;

	f1.beSigned(b1);
	f1.beSigned(b2);

}

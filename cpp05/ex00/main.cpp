/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:36:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/12 09:13:32 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	
	try {
		Bureaucrat	b1("Bureaucrat_1", 5);

		std:: cout << b1 << std::endl;
		b1.setGrade(2);
		std:: cout << b1 << std::endl;
		b1.increment();
		std:: cout << b1 << std::endl;
		b1.increment();
		std:: cout << b1 << std::endl;
	} catch(std::exception & e) {
		std::cout << e.what() << std::endl;
	}

}

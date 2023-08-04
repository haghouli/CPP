/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hicham <hicham@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:36:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/02 13:22:01 by hicham           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void) {
	
	Bureaucrat b1("Bureaucrat_1", 1);
	Bureaucrat b2("Bureaucrat_2", 150);

	std:: cout << b1.getGrade() << std::endl;
	std:: cout << b2.getGrade() << std::endl;
	
	b1.setGrade(0);
	b2.setGrade(152);

	std:: cout << b1.getGrade() << std::endl;
	std:: cout << b2.getGrade() << std::endl;

	b1.increment();
	b2.decrement();

	std:: cout << b1.getGrade() << std::endl;
	std:: cout << b2.getGrade() << std::endl;

	b1.decrement();
	b2.increment();

	std:: cout << b1.getGrade() << std::endl;
	std:: cout << b2.getGrade() << std::endl;

}

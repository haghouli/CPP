/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:36:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/12 11:19:08 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void) {

	try {
		Bureaucrat	b1("Bureacrat_1", 2);
		Intern		someRandomIntern;
		AForm*	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender1");
		AForm*	rrf1 = someRandomIntern.makeForm("robotomy request", "Bender2");
		AForm*	rrf2 = someRandomIntern.makeForm("presidential pardon", "Bender3");

		rrf->execute(b1);
		rrf1->execute(b1);
		rrf2->execute(b1);

		delete rrf;
		delete rrf1;
		delete rrf2;
		
	} catch(const char * msg) {
		std::cout << msg <<  std::endl; 
	}
	return 0;
}

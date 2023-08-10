/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:36:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/09 11:34:57 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void) {

	Bureaucrat	b1("Bureacrat_1", 2);
	Intern		someRandomIntern;
	AForm*	rrf = someRandomIntern.makeForm("presidental pardon", "Bender1");
	AForm*	rrf1 = someRandomIntern.makeForm("robotomy request", "Bender2");
	AForm*	rrf2 = someRandomIntern.makeForm("presidential pardon", "Bender3");
	
	if(rrf) {
		rrf->beSigned(b1);
		rrf->execute(b1);
		delete rrf;
	}
	
	if(rrf1) {
		rrf1->beSigned(b1);
		rrf1->execute(b1);
		delete rrf1;
	}
	
	if(rrf2) {
		rrf2->beSigned(b1);
		rrf2->execute(b1);
		delete rrf2;
	}
	system("leaks ex03");
	return 0;
}

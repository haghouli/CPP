/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 10:36:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/13 08:27:35 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

int main(void) {
	
	{
		AForm*		rrf;
		try {
			Bureaucrat	b1("Bureacrat_1", 2);
			Intern		someRandomIntern;
			rrf = someRandomIntern.makeForm("shrubbery creation", "Bender1");

			rrf->beSigned(b1);
			rrf->execute(b1);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		} catch(const char * msg) {
			std::cout << msg <<  std::endl;
		}
		if(rrf)
			delete rrf;
	}

	{
		AForm*		rrf;
		try {
			Bureaucrat	b1("Bureacrat_1", 2);
			Intern		someRandomIntern;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender2");

			rrf->beSigned(b1);
			rrf->execute(b1);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		} catch(const char * msg) {
			std::cout << msg <<  std::endl;
		}
		if(rrf)
			delete rrf;
	}

	{
		AForm*		rrf;
		try {
			Bureaucrat	b1("Bureacrat_1", 2);
			Intern		someRandomIntern;
			rrf = someRandomIntern.makeForm("presidential pardon", "Bender2");

			rrf->beSigned(b1);
			rrf->execute(b1);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		} catch(const char * msg) {
			std::cout << msg <<  std::endl;
		}
		if(rrf)
			delete rrf;
	}

	return 0;
}

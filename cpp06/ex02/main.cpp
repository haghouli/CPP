/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 07:29:25 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/17 13:14:31 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.hpp"


int main(void) {
	Base *b = generate();
	identify(b);

	std::cout << "*****************" << std::endl;

	Base & ref = *b;
	identify(ref);

	delete b;
	
}

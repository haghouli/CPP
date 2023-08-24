/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 07:29:25 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/15 08:56:56 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void) {
	
	Data d;
	d.f_name = "Hicham";
	d.l_name = "Aghoulid";
	d.age = 21;

	uintptr_t t = Serializer::serialize(&d);
	
	std::cout << t << std::endl;

	Data *d2 = Serializer::deserialize(t);

	std::cout << d2->f_name << std::endl;
	std::cout << d2->l_name << std::endl;
	std::cout << d2->age << std::endl;
}

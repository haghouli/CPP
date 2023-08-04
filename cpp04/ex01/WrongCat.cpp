/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:11:37 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/03 10:13:58 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	type = "WrongCat";
	std::cout << "Hello a new WrongCat is Here." << std::endl;
}

WrongCat::WrongCat(const WrongCat & obj) {
	*this = obj;
}

WrongCat & WrongCat::operator=(const WrongCat & obj) {
	if(this == &obj)
		return *this;
	type = obj.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "RIP WrongCat :'(" << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "The WrongCat is Meowing." << std::endl; 
}
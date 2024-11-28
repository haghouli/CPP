/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:11:10 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/31 09:33:22 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	std::cout << "Hello a new Cat is Here." << std::endl;
}

Cat::Cat(const Cat & obj) {
	*this = obj;
}

Cat & Cat::operator=(const Cat & obj) {
	if(this == &obj)
		return *this;
	type = obj.type;
	return *this;
}

Cat::~Cat() {
	std::cout << "RIP cat :'(" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "The cat is Meowing." << std::endl; 
}
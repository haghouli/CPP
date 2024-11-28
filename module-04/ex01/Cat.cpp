/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 09:11:10 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/04 09:57:56 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	type = "Cat";
	brain = new Brain();
	std::cout << "Hello a new Cat is Here." << std::endl;
}

Cat::Cat(const Cat & obj) {
	*this = obj;
}

Cat & Cat::operator=(const Cat & obj) {
	if(this == &obj)
		return *this;
	delete brain;
	type = obj.type;
	Brain *b = new Brain();
	*b = *(obj.brain);
	this->brain = b;
	return *this;
}

Cat::~Cat() {
	delete brain;
	std::cout << "RIP cat :'(" << std::endl;
}

void Cat::makeSound() const {
	std::cout << "The cat is Meowing." << std::endl; 
}
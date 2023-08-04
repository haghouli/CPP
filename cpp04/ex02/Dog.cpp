/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:46:10 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/04 09:58:31 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	type = "Dog";
	brain = new Brain();
	std::cout << "A new dog has been born." << std::endl;
}

Dog::Dog(const Dog & obj) {
	*this = obj;
}

Dog & Dog::operator=(const Dog & obj) {
	if(this == &obj)
		return *this;
	delete brain;
	type = obj.type;
	Brain *b = new Brain();
	*b = *(obj.brain);
	this->brain = b;
	return *this;
}

Dog::~Dog() {
	delete brain;
	std::cout << "RIP dog." << std::endl;
}

void Dog::makeSound() const {
	std::cout << "The dog barking." << std::endl;
}
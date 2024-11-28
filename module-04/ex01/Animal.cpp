/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:21:35 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/27 09:29:36 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("undefined") {
	std::cout << "Just creating an undefined animal." << std::endl;
};

Animal::Animal(const Animal & obj) {
	*this = obj;
};

const Animal & Animal::operator=(const Animal & obj) {
	if(this == &obj)
		return *this;
	type = obj.type;
	return *this;
};

Animal::~Animal() {
	std::cout << "That unknown animal should be destroyed." << std::endl;
};

std::string Animal::getType() const {
	return type;
}

void Animal::makeSound() const {
	std::cout << "No sound for undefined animal" << std::endl;
}
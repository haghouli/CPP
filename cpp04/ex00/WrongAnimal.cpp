/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 10:08:33 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/03 10:21:03 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("undefined") {
	std::cout << "Just creating an WrongAnimal." << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal & obj) {
	*this = obj;
};

const WrongAnimal & WrongAnimal::operator=(const WrongAnimal & obj) {
	if(this == &obj)
		return *this;
	type = obj.type;
	return *this;
};

WrongAnimal::~WrongAnimal() {
	std::cout << "That WrongAnimal should be destroyed." << std::endl;
};

std::string WrongAnimal::getType() const {
	return type;
}

void WrongAnimal::makeSound() const {
	std::cout << "No sound for WrongAnimal" << std::endl;
}
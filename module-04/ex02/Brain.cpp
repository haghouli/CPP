/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:02:34 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/27 19:04:40 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Creating a brain." << std::endl;
}

Brain::Brain(const Brain & obj) {
	*this = obj;
}

const Brain & Brain::operator=(const Brain & obj) {
	if(this == &obj)
		return *this;
	for(int i = 0; i < 100; i++) {
		this->ideas[i] = obj.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Destroying the brain." << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:30:50 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/06 15:54:54 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { };

Cure::Cure(const Cure & obj) {
    *this = obj;
}

Cure & Cure::operator=(const Cure & obj) {
    (void)obj;
    return *this;
}

AMateria* Cure::clone() const {
    AMateria *cln = new Cure();
    return cln;
};

void Cure::use(ICharacter& target) {
    std::cout << "* heals "<< target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure() { }

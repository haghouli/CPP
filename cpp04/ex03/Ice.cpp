/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:28:05 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/03 11:20:50 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice") { };

Ice::Ice(const Ice & obj) {
    type = obj.type;
    *this = obj;
}

Ice & Ice::operator=(const Ice & obj) {
    if(this == &obj)
        return *this;
    return *this;
}

AMateria* Ice::clone() const {
    AMateria *cln = new Ice();
    return cln;
};

void Ice::use(ICharacter& target) {
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice() { }

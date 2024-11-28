/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 08:20:46 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/31 10:00:43 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type("Unknown") { }


AMateria::AMateria(std::string const & type) {
    this->type = type;
}

AMateria & AMateria::operator=(const AMateria & obj) {
    if(this == &obj )
        return *this;
    type = obj.type;
    return *this;
}

AMateria::AMateria(const AMateria & obj) {
    *this = obj; 
}

std::string const & AMateria::getType() const {
    return type;
};

AMateria::~AMateria() { }

void AMateria::use(ICharacter& target) {
    (void)target;
    std::cout << "No use in abstract " << std::endl;
}

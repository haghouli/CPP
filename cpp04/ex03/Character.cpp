/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/28 09:59:12 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/05 10:37:42 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : equiped_materia_cout(0) {
    for(int i = 0; i < 4; i++)
        equiped_materia[i] = NULL;
};

Character::Character(const std::string & name) : name(name),  equiped_materia_cout(0) {
    for(int i = 0; i < 4; i++)
        equiped_materia[i] = NULL;
}

Character::Character(const Character & obj) {
    *this = obj;  
};

Character & Character::operator=(const Character & obj) {
    if(this == &obj)
        return *this;

    name = obj.name;
    equiped_materia_cout = obj.equiped_materia_cout;
    for(int i = 0; i < equiped_materia_cout; i++) {
        equiped_materia[i] = obj.equiped_materia[i];
    }
    return *this;
};

Character::~Character() { };

std::string const & Character::getName() const {
    return name;
};

void Character::equip(AMateria* m) {
    if(equiped_materia_cout <= 3)
        equiped_materia[equiped_materia_cout++] = m;
    else {
        bool b = false;
        for(int i = 0; i < 4; i++) {
            if(equiped_materia[i] == NULL) {
                equiped_materia[i] = m;
                b = true;
                break;
            }
        }
        if(!b)
            std::cout << "Full slots" << std::endl;
    }
};

void Character::unequip(int idx) {
    if(idx <= 3) {
        if(equiped_materia[idx] != NULL)
            equiped_materia[idx] = NULL;
        else
            std::cout << "Slot is Already Empty Nothing to unequip" << std::endl;
    }
    else
        std::cout << "Invalid slot index" << std::endl;
};

void Character::use(int idx, ICharacter& target) {
    if(idx <= 3) {
        if(equiped_materia[idx] !=  NULL)
            equiped_materia[idx]->use(target);
        else
            std::cout << "Slot is empty" << std::endl;
    } else {
        std::cout << "Invalid slot to use" << std::endl;
    }
};

void Character::showLeranedMaterias() {
    for(int i = 0; i < equiped_materia_cout; i++) {
        std::cout << equiped_materia[i]->getType() << std::endl;
    } 
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:38:01 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/07 09:37:30 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon & weapon) : weapon(weapon), name(name) { }

void HumanA::attack() {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
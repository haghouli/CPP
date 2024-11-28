/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:46:59 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/06 20:46:40 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_HPP
#define HUMAN_B_HPP
#include "Weapon.hpp"

class HumanB {
private:
    Weapon      *weapon;
    std::string name;

public:
    HumanB();
    HumanB(std::string name);
    void    attack();
    void    setWeapon(Weapon & weapon);
};

#endif
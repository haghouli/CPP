/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:34:04 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/06 20:35:38 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP
#include "Weapon.hpp"

class HumanA {
private:
    Weapon  & weapon;
    std::string name;

public:
    HumanA();
    void attack();
    HumanA(std::string name, Weapon & weapon);
};

#endif
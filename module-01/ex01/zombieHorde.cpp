/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/20 18:13:07 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/06 18:23:06 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie *z = new Zombie[N];
    
    for(int i = 0; i < N; i++) {
        z[i].set_name(name);
    }
    return z;
}
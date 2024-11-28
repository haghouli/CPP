/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:21:31 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/06 18:09:46 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(void)
{
    int n = 10;
    Zombie *zombies = zombieHorde(n, "Zombiessssss");

    for(int i = 0; i < n; i++) {
        zombies[i].announce();
    }
    delete [] zombies;
    return 0;
}
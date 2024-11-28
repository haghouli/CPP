/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:12:23 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/07 09:28:00 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H 
#define ZOMBIE_H

#include <string>
#include <iostream>

class Zombie {
private :
    std::string name;

public :
    Zombie();
    void announce( void );
    void set_name(std::string name);
    ~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif
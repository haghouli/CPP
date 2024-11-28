/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 11:12:23 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/06 18:06:33 by haghouli         ###   ########.fr       */
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
    Zombie(std::string name);
    void        announce( void );
    ~Zombie();
};

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
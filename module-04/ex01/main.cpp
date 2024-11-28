/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 08:18:37 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/07 11:38:14 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    
    int n = 10;
    Animal *a[n];

    for(int i = 0; i < n; i++) {
        if (i < n / 2)
            a[i] = new Dog();
        else
            a[i] = new Cat();
    }

    for(int i = 0; i < n ; i++)
        a[i]->makeSound();

    for(int i = 0; i < n ; i++)
        delete a[i];

    std::cout << "********************************************" << std::endl;

    Dog *dog1 = new Dog;
    Dog *dog2 = new Dog;

    *dog2 = *dog1;

    delete dog1;
    delete dog2;

    std::cout << "********************************************" << std::endl;

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j; //should not create a leak
    delete i;

    return 0;

}
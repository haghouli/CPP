/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 08:22:49 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/26 15:33:33 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T1>
void print(T1 var) {
    std::cout << "Print -> "<< var << std::endl;
}

void    print2(int var) {
    std::cout << "Print 2 -> "<< var << std::endl;
}

int main(void) {

    {
        int length = 5;
        int arr[length] = {42, 43, 44, 45, 46};

        ::iter(arr, length, print2);
    }

    std::cout << "*****************************" << std::endl;

    {
        int length = 5;
        int arr[length] = {23, 76, 34, 899, 42};

        ::iter(arr, length, print<int>);
    }

    std::cout << "*****************************" << std::endl;

    {
        int length = 5;
        float names[length] = {1.43, 18.34, 42.42, 22.78 , 90.54};

        ::iter(names, length, print<float>);
    }

    std::cout << "*****************************" << std::endl;

    {
        int length = 5;
        std::string names[length] = {"name 1", "name 2", "name 3", "name 4", "name 5"};

        ::iter(names, length, print<std::string>);
    }

}
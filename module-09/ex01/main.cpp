/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:38:20 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/30 09:47:45 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av) {
    try {
        if(ac != 2)
            throw "One argumenet required";
        RPN rpn;
        std::cout << rpn.claculation(av[1]) << std::endl;
    }
    catch (const char * msg) {
        std::cout << msg << std::endl;
    }
}
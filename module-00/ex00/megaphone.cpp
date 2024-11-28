/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 10:16:45 by haghouli          #+#    #+#             */
/*   Updated: 2023/06/21 10:16:50 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int ac, char **av)
{
    std::string str;
    if(ac <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        for(int i = 1; av[i]; i++) {
            for(int j = 0; av[i][j]; j++) {
                if(std::tolower(av[i][j])) 
                    av[i][j] = std::toupper(av[i][j]);
                std::cout << av[i][j];
            }
            if(av[i + 1])
                std::cout << " ";
        }
    }
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 08:49:41 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/11 11:01:41 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.hpp"

bool is_int(std::string str) {
    int start = 0;
    if(str[0] == '-' || str[0] == '+')
        start = 1;
    for(size_t i = start; i < str.length(); i++)
        if(!isdigit(str[i]))
            return false;
    return true;
}

void    get_char(std::string str) {
    try {
        if(is_int(str)) {
            int n = stoi(str);
            if(!isprint(n))
                std::cout << "Non displayable";
            else
                std::cout << static_cast<char>(n);
        } else if(str.length() != 1) 
            std::cout << "impossible";
        else if(isalpha(str[0]))
            std::cout << static_cast<char>(str[0]);
    }
    catch(std::exception & e)
    {
        std::cout << "impossible";
    }
}

void    get_int(std::string str) {
    try {
        if(is_int(str))
            std::cout << stoi(str);
        else
            std::cout << "impossible" ;
    }
    catch(std::exception & e)
    {
        std::cout << "imposible";
    }
}

void    get_float(std::string str) {
    try {
       std::cout << static_cast<float>(stof(str));
    }
    catch(std::exception & e)
    {
        std::cout << "imposible";
    }
}

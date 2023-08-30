/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:37:21 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/27 19:37:09 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void) {
    try{
        std::vector<int> v;
        v.push_back(1);
        v.push_back(23);
        v.push_back(0);
        v.push_back(12);
        v.push_back(230);
        v.push_back(12);
        v.push_back(91);
        std::vector<int>::iterator it = ::easyfind(v, 12);
        
        std::cout << *it << std::endl;
    } catch(const char *msg) {
        std::cout << msg << std::endl;
    }
}
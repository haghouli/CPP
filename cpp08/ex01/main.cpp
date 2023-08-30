/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:37:21 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/28 15:51:46 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void) {
    {
        try{
            Span sp(5);
            sp.addNumber(23);
            sp.addNumber(5);
            sp.addNumber(123);
            sp.addNumber(9);
            sp.addNumber(3);

            std::cout << "shortest span -> " << sp.shortestSpan() << std::endl;
            std::cout << "longest span -> " << sp.longestSpan() << std::endl;
        } catch(std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "**************************" << std::endl;
    
    {
        try {
            Span sp = Span(5);
            sp.addNumber(6);
            sp.addNumber(3);
            sp.addNumber(17);
            sp.addNumber(9);
            sp.addNumber(11);
            std::cout << "shortest span -> " << sp.shortestSpan() << std::endl;
            std::cout << "longest span -> " << sp.longestSpan() << std::endl;
        } catch(std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "**************************" << std::endl;
    
    {
        try {
            Span sp(15000);
            for(int i = 0; i < 15000; i++)
                sp.addNumber(i);
            sp.show();
            std::cout << "shortest span -> " << sp.shortestSpan() << std::endl;
            std::cout << "longest span -> " << sp.longestSpan() << std::endl;
        } catch(std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }

    std::cout << "**************************" << std::endl;
    
    {
        try {
            Span sp(5);
            std::vector<int> v;
            for(int i = 0; i < 5; i++)
                v.push_back(i);

            sp.addNumber(v.begin(), v.end());
            sp.show();

        } catch(std::exception & e) {
            std::cout << e.what() << std::endl;
        }
    }

}
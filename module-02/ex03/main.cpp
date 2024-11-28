/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:01:28 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/12 19:04:00 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Point.hpp"

int main( void ) {
    
    Point a(3.0f, 2.0f);
    Point b(7.0f, 2.0f);
    Point c(3.0f, 8.0f);
    
    Point p(5.0f, 4.0f); // true
    Point p1(5.0f, 7.0f); // false
    Point p2(1.0f, 1.0f); // false
    Point p3(4.0f, 9.0f); // false
    Point p4(6.0f, 3.0f); // true
    Point p5(4.5f, 2.05f); // true
    Point p6(3.0f, 4.0f); // false

    std::cout << bsp(a, b, c, p) << std::endl;
    std::cout << bsp(a, b, c, p1) << std::endl;
    std::cout << bsp(a, b, c, p2) << std::endl;
    std::cout << bsp(a, b, c, p3) << std::endl;
    std::cout << bsp(a, b, c, p4) << std::endl;
    std::cout << bsp(a, b, c, p5) << std::endl;
    std::cout << bsp(a, b, c, p6) << std::endl;

    std::cout << bsp(a, b, c, a) << std::endl; // false
    std::cout << bsp(a, b, c, b) << std::endl; // false
    std::cout << bsp(a, b, c, c) << std::endl; // false
    return 0;
}
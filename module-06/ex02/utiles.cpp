/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utiles.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 09:22:17 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/21 18:12:49 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utiles.hpp"

Base * generate(void) {
    srand(time(0));
    int n = rand();
    if(n % 10 < 3)
        return new A;
    else if(n % 10 < 6)
        return new B;
    else
        return new C;
}

void    identify(Base* p) {
    A *a;
    B *b;
    C *c;
    if((a = dynamic_cast<A*>(p)))
        std::cout << "A" << std::endl;
    else if((b = dynamic_cast<B*>(p)))
        std::cout << "B" << std::endl;
    else if((c = dynamic_cast<C*>(p)))
        std::cout << "C" << std::endl;
    (void)a;
    (void)b;
    (void)c;
}

void    identify(Base & p) {
    
    try
    {
        A &a = dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
        (void)a;
    }
    catch(const std::exception& e) { }

    try
    {
        B &a = dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        (void)a;
    }
    catch(const std::exception& e) { }

    try
    {
        C &a = dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        (void)a;
    }
    catch(const std::exception& e) { }
    
}
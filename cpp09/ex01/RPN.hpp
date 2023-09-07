/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:42:41 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/03 08:03:07 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <iterator>
#include <string.h>

class   Rpn {
    private:
        std::vector<std::string> v;
        std::stack<int> stk;
    
    public:
        Rpn(char * av);
        int claculation();
        int do_opeartion(int a, int b, char op); 
};

#endif

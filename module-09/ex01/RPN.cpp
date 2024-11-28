/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:42:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/30 09:48:16 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() { }

RPN::RPN(const RPN & obj) { (void)obj; }

const RPN & RPN::operator=(const RPN & obj) { 
    (void)obj; 
    return *this;
}

RPN::~RPN() { };

void RPN::check_value(char s) {
    std::string str = "+-/*0123456789 ";
    if(str.find(s) == std::string::npos)
        throw "Error";
}

int RPN::claculation(char * av) {
    int i = 0;
    std::string str = "+-/*";
    while(av[i]) {
        check_value(av[i]);
        if(isspace(av[i])) { }
        else if(str.find(av[i]) == std::string::npos) {
            stk.push(av[i] - '0');
        }
        else {
            if(stk.empty())
                throw "Error";
            int a = stk.top();
            stk.pop();
            if(stk.empty())
                throw "Error";
            int b = stk.top();
            stk.pop();
            stk.push(do_opeartion(b, a, av[i]));
        }
        i++;
    }
    if(stk.size() != 1)
        throw "Error";
    return stk.top(); 
}

int RPN::do_opeartion(int a, int b, char op) {
    switch (op)
    {
        case '+':
            return a + b;
        case '-':
            return a - b;
        case '*':
            return a * b;
        case '/':
            if(b == 0)
                throw "can't devide by zero";
            return a / b;
        default:
            break;
    }
    return 0;
}
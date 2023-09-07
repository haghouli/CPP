/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:42:38 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/03 09:02:47 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

Rpn::Rpn(char * av) {
    std::string str = "+-/*0123456789";
    char * s = strtok(av, " ");
    v.push_back(s);
    while (1)
    {
        s = strtok(NULL, " ");
        if(s == NULL)
            break;
        v.push_back(s);
        int b = -1;
        b = str.find(v.back()[0]);
        if(v.back().length() != 1 || b == -1) {
            throw "Error";
        }
    }
}

int Rpn::claculation() {
    std::vector<std::string>::iterator it = v.begin();
    std::string s = "+-*/";
    if(!isdigit((*it)[0]) || !isdigit((*(it + 1))[0]))
        throw "Error";
    for(; it != v.end(); it++) {
        int b = -1;
        b = s.find(*it);
        if(b == -1)
            stk.push(atoi((*it).c_str()));
        else {
            int a = stk.top();
            stk.pop();
            if(stk.empty())
                throw "Error";
            int b = stk.top();
            stk.pop();
            stk.push(do_opeartion(b, a, (*it)[0]));
        }
    }
    if(stk.size() != 1)
        throw "Error";
    return stk.top();
}

int Rpn::do_opeartion(int a, int b, char op) {
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
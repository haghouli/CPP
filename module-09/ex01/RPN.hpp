/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 12:42:41 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/30 09:47:30 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <algorithm>
#include <stack>
#include <list>
#include <iterator>
#include <string.h>

class   RPN {
    private:
        std::list<std::string> lst;
        std::stack<int> stk;

        RPN(const RPN & obj);
        const RPN & operator=(const RPN & obj);
    
        int do_opeartion(int a, int b, char op);

        void check_value(char s);

    public:
        RPN();
        ~RPN();
        int claculation(char * av);
};

#endif

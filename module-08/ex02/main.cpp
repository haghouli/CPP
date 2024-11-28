/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:53:34 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/31 16:52:03 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {

    {
        MutantStack<int> mstk;
        std::cout << "is empty -> " << mstk.empty() << std::endl;
        mstk.push(2);
        mstk.push(5);
        mstk.push(90);
        mstk.push(122);
        mstk.push(8);
        mstk.push(11);
        mstk.push(42);
        mstk.push(24);

        std::cout << mstk.top() << std::endl;
        mstk.pop();
        std::cout << mstk.top() << std::endl;
        std::cout << "size -> " << mstk.size() << std::endl;
        sort(mstk.begin(), mstk.end());
        MutantStack<int>::iterator it = mstk.begin();
        for(; it != mstk.end(); it++)
            std::cout << *it << std::endl;
    }
    std::cout << "******************************" << std::endl;
    {
        MutantStack<int> mstack;
        mstack.push(5);
        mstack.push(17);
        std::cout << mstack.top() << std::endl;
        mstack.pop();
        std::cout << mstack.size() << std::endl;
        mstack.push(3);
        mstack.push(5);
        mstack.push(737);
        //[...]
        mstack.push(0);
        MutantStack<int>::iterator it = mstack.begin();
        MutantStack<int>::iterator ite = mstack.end();
        ++it;
        --it;
        while (it != ite)
        {
            std::cout << *it << std::endl;
            ++it;
        }
        std::stack<int> s(mstack);
    }
    
    return 0;
}
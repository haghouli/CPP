/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:09:13 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/27 12:38:11 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


PmergeMe::PmergeMe() { }

PmergeMe::PmergeMe(const PmergeMe & obj) { (void)obj; }

const PmergeMe & PmergeMe::operator=(const PmergeMe & obj) { 
    (void)obj; 
    return *this;
}

PmergeMe::~PmergeMe() { };

PmergeMe::PmergeMe(char **av) {
    last = -1;
    for(int i = 1; av[i]; i++) {
        long n = strtol(av[i], NULL, 10);
        bool b = errno == ERANGE;
        if(!is_int(av[i]) || n > INT_MAX || b)
            throw "Error";
        nums.push_back(n);
    }
}

void PmergeMe::show() {
    
    std::deque<int>::iterator it = nums.begin();
    std::cout << "Before: ";
    for(; it != nums.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
    
    std::deque<int>::iterator it2 = sorted_deque.begin();
    std::cout << "After:  ";
    for(; it2 != sorted_deque.end(); it2++)
        std::cout << *it2 << " ";

    std::cout << std::endl;
    std::cout << "Time to process a range of " << nums.size() << " elements with std::[deque] : "<< deq_duration << " us" << std::endl;
    std::cout << "Time to process a range of " << nums.size() << " elements with std::[vector] : "<< vec_duration << " us" << std::endl;
}

bool    is_int(char *str) {
    for(int i = 0; str[i]; i++)
        if(!isdigit(str[i]))
            return false;
    return true;
};

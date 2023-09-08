/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:09:13 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/08 17:44:31 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

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
    for(; it != nums.end(); it++)
        std::cout << *it << " ";
}

std::deque<std::pair<int, int> > PmergeMe::make_pairs() {
    std::deque<std::pair<int, int> > pairs;
    std::deque<int>::iterator it = nums.begin();
    for(; it != nums.end(); it++) {
        if(it != nums.end() && it + 1 != nums.end())
        {
            std::pair<int, int> p;
            p.first = *(it++);
            p.second = *it;
            if(p.first > p.second)
                std::swap(p.first, p.second);
            pairs.push_back(p);
        }
    }
    if(nums.size() % 2) {
        last = *(--it);
    }
    // std::deque<std::pair<int, int> >::iterator it2 = pairs.begin();
    // for(; it2 != pairs.end(); it2++)
    //     std::cout << (*it2).first << " - " << (*it2).second << std::endl;
    return pairs;
}

void    PmergeMe::sort() {
    std::deque<std::pair<int, int> > pairs = make_pairs();
}

bool    is_int(char *str) {
    for(int i = 0; str[i]; i++)
        if(!isdigit(str[i]))
            return false;
    return true;
};

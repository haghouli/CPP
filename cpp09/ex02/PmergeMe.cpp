/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:09:13 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/07 15:46:54 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(char **av) {
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

void    PmergeMe::sort() {
    merge_sort(0, nums.size());
}

void    PmergeMe::merge(int start, int mid, int end) {
    int start_1 = start;
    int start_2 = mid;
    std::deque<int> d;
    while (start_1 < mid && start_2 < end)
    {
        if(nums[start_1] < nums[start_2])
            d.push_back(nums[start_1++]);
        else
            d.push_back(nums[start_2++]);
    }
    while (start_1 < mid)
        d.push_back(nums[start_1++]);
    while (start_2 < end)
        d.push_back(nums[start_2++]);
    std::deque<int>::iterator it = d.begin();
    for(int i = start; i < end; i++)
        nums[i] = *(it++);
}

void    PmergeMe::merge_sort(int start, int end) {
    
    // for(int i = start; i < end; i++)
    //     std::cout << nums[i] << " ";
    // std::cout << std::endl;
    int mid = (end + start) / 2;
    if(end - start <= 1)
        return ;
    merge_sort(start, mid);
    merge_sort(mid , end);
    merge(start, mid, end);
}

bool    is_int(char *str) {
    for(int i = 0; str[i]; i++)
        if(!isdigit(str[i]))
            return false;
    return true;
};
/*
    lst -> 1 9 4 5
    size -> 4

    4 / 2 = 2
        0 -> 2
        2 -> 4
    
    0 + 2 / 2 = 1



*/
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

// void PmergeMe::do_insertion(std::deque<std::pair<int, int> > pairs) {
//     std::deque<std::pair<int, int> >::iterator it = pairs.begin();
//     for(; it != pairs.end(); it++) {
//         std::deque<int>::iterator it2 =  std::lower_bound(sorted_deque.begin(), sorted_deque.end(), it->second);
//         sorted_deque.insert(it2, it->second);
//     }
//     if(last != -1) {
//         std::deque<int>::iterator it2 =  std::lower_bound(sorted_deque.begin(), sorted_deque.end(), last);
//         sorted_deque.insert(it2, last);
//     }
// }

void PmergeMe::show() {
    std::deque<int>::iterator it = sorted_deque.begin();
    for(; it != sorted_deque.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
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
    return pairs;
}

void    PmergeMe::merge(int start, int mid, int end) {
    int s1 = start;
    int s2 = mid;
    std::deque<int> d;
    while (s1 < mid && s2 < end)
    {
        if(sorted_deque[s1] < sorted_deque[s2])
            d.push_back(sorted_deque[s1++]);
        else
            d.push_back(sorted_deque[s2++]);
    }
    while (s1 < mid)
        d.push_back(sorted_deque[s1++]);
    while (s2 < end)
        d.push_back(sorted_deque[s2++]);
    std::deque<int>::iterator it = d.begin();
    for(int i = start; i < end; i++)
        sorted_deque[i] = *(it++);
}

void    PmergeMe::merge_sort(int start, int end) {
    int mid = (end + start) / 2;
    if(end - start <= 1)
        return;
    merge_sort(start, mid);
    merge_sort(mid, end);
    merge(start, mid, end);
}

void    PmergeMe::sort_deque() {
    std::deque<std::pair<int, int> > pairs = make_pairs();
    std::deque<std::pair<int, int> >::iterator it = pairs.begin();
    for(; it != pairs.end(); it++)
        sorted_deque.push_back(it->first);
    merge_sort(0, sorted_deque.size());
    do_insertion(pairs, sorted_deque);
}

bool    is_int(char *str) {
    for(int i = 0; str[i]; i++)
        if(!isdigit(str[i]))
            return false;
    return true;
};

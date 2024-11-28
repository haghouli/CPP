/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:09:04 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/30 10:02:57 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <algorithm>
#include <deque>
#include <ctype.h>
#include <iostream>
#include <cerrno>
#include <utility>
#include <climits>
#include <vector>
#include <typeinfo>

class PmergeMe {

    private:
        int last;
        PmergeMe();
        PmergeMe(const PmergeMe & obj);
        const PmergeMe & operator=(const PmergeMe & obj);

        template<typename T1, typename T2>
        void do_insertion(T1 pairs, T2 & container) {
            typename T1::iterator it = pairs.begin();
            for(; it != pairs.end(); it++) {
                typename T2::iterator it2 =  std::lower_bound(container.begin(), container.end(), it->second);
                container.insert(it2, it->second);
            }
            if(last != -1) {
                typename T2::iterator it2 =  std::lower_bound(container.begin(), container.end(), last);
                container.insert(it2, last);
            }
        }

        template<typename T>
        void    merge(int start, int mid, int end, T & sorted) {
            int s1 = start;
            int s2 = mid;
            T d;
            while (s1 < mid && s2 < end)
            {
                if(sorted[s1] < sorted[s2])
                    d.push_back(sorted[s1++]);
                else
                    d.push_back(sorted[s2++]);
            }
            while (s1 < mid)
                d.push_back(sorted[s1++]);
            while (s2 < end)
                d.push_back(sorted[s2++]);
            typename T::iterator it = d.begin();
            for(int i = start; i < end; i++)
                sorted[i] = *(it++);
        }

        template<typename T>
        void    merge_sort(int start, int end, T & sorted) {
            int mid = (end + start) / 2;
            if(end - start <= 1)
                return;
            merge_sort(start, mid, sorted);
            merge_sort(mid, end, sorted);
            merge(start, mid, end, sorted);
        }

        template<typename T1, typename T2>
        T2 make_pairs(T1 nums, T2) {
            T2 pairs;
            typename T1::iterator it = nums.begin();
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

    public:
        std::deque<int> nums;
        std::deque<int> sorted_deque;
        std::vector<int> sorted_vector;
        double deq_duration;
        double vec_duration;
    
        PmergeMe(char **av);
        ~PmergeMe();

        void    show();

        template<typename T1, typename T2>
        T1 merge_insertion_sort(T1 nums, T2) {
            T1 sorted;
            T2 test;
            T2 pairs = make_pairs(nums, test);
            typename T2::iterator it = pairs.begin();
            for(; it != pairs.end(); it++)
                sorted.push_back(it->first);
            merge_sort(0, sorted.size(), sorted);
            do_insertion(pairs, sorted);
            return sorted;
        }

};

template<typename T>
bool is_sorted(T start, T end) {
    typename T::iterator it = start;
    for(; it != end - 1; it++) {
        if(*it > *(it + 1))
            return false;
    }
    return true;
}

bool    is_int(char *str);

#endif
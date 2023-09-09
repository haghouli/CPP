/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:09:04 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/08 17:43:16 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define  PMERGEME_HPP

#include <algorithm>
#include <deque>
#include <ctype.h>
#include <iostream>
#include <cerrno>
#include <utility>
#include <climits>

class PmergeMe {

    private:
        std::deque<int> nums;
        int last;
        std::deque<std::pair<int, int> > make_pairs();
        std::deque<int> sorted_deque;
        std::deque<int> sorted_vector;
        // void    do_insertion(std::deque<std::pair<int, int> > pairs);
        void    merge_sort(int start, int end);
        void    merge(int start, int mid, int end);

        template<typename T1, typename T2>
        void do_insertion(T1 pairs, T2) {
            typename T1::iterator it = pairs.begin();
            for(; it != pairs.end(); it++) {
                typename T2::iterator it2 =  std::lower_bound(sorted_deque.begin(), sorted_deque.end(), it->second);
                sorted_deque.insert(it2, it->second);
            }
            if(last != -1) {
                typename T2::iterator it2 =  std::lower_bound(sorted_deque.begin(), sorted_deque.end(), last);
                sorted_deque.insert(it2, last);
            }
        }

    public:
        void    show();
        PmergeMe(char **av);
        void    sort_deque();
        void    sort_vector();
    
};

bool    is_int(char *str);

#endif
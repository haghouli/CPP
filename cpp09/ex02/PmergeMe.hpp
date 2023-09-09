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
        std::deque<int> sorted;
        void    do_insetion(std::deque<std::pair<int, int> >);
        void    merge_sort(int start, int end);
        void    merge(int start, int mid, int end);

    public:
        void    show();
        PmergeMe(char **av);
        void    sort();
    
};

bool    is_int(char *str);

#endif
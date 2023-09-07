/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 10:09:04 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/07 11:57:23 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define  PMERGEME_HPP

#include <algorithm>
#include <deque>
#include <ctype.h>
#include <iostream>
#include <cerrno>
#include <climits>

class PmergeMe {

    private:
        std::deque<int> nums;

    public:
        void    show();
        void    sort();
        void    merge_sort(int start, int end);
        void    merge(int start, int mid, int end);
        PmergeMe(char **av);
    
};

bool    is_int(char *str);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:38:20 by haghouli          #+#    #+#             */
/*   Updated: 2023/09/30 10:02:06 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av) {

    try
    {
        if(ac < 2)
            throw "No Arguments";
        PmergeMe p(av);
        if(is_sorted(p.nums.begin(), p.nums.end()))
            throw "The numbers are already sorted";
        std::deque<std::pair<int, int> > d;
        clock_t start = clock();
        p.sorted_deque = p.merge_insertion_sort(p.nums, d);
        clock_t end = clock();
        p.deq_duration = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1000000.0;

        std::vector<int> v(p.nums.begin(), p.nums.end());
        start = clock();
        std::vector<std::pair<int, int> > d2;
        p.sorted_vector = p.merge_insertion_sort(v, d2);
        end = clock();
        p.vec_duration = (static_cast<double>(end - start) / CLOCKS_PER_SEC) * 1000000.0;

        p.show(); 
    }
    catch(const  char * msg)
    {
        std::cout << msg << std::endl;
    }


    return 0;
}
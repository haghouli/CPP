/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 08:23:02 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/24 07:45:42 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T1, typename T2> void iter(T1 *arr, T2 length, void (*fun)(T1)) {
    for(T2 i = 0; i < length; i++) {
        fun(arr[i]);
    }
}

#endif
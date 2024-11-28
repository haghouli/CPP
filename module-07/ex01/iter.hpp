/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 08:23:02 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/26 09:59:18 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T1, typename func>
void iter(T1 arr, unsigned int length, func f) {
    for(unsigned int i = 0; i < length; i++) {
        f(arr[i]);
    }
}

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 12:12:14 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/24 07:41:53 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template<typename T> void swap(T & a, T & b) {
    T tmp = a;
    a = b;
    b = tmp;
};

template<typename T> T min(T a, T b) {
    return a > b ? b : a; 
};

template<typename T> T max(T a, T b) {
    return a > b ? a : b;
}


#endif
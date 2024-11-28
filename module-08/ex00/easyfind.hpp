/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 16:28:17 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/27 19:21:59 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>


template<typename T>
typename T::iterator easyfind(T & t, int toFind) {
    typename T::iterator  result = std::find(t.begin(), t.end(), toFind);
    if(result == t.end())
        throw "invalid value";
    return result;
}

#endif
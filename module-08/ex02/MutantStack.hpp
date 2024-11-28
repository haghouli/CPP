/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:55:26 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/31 16:49:09 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>
#include <iterator>
#include <vector>

template<typename T>
class MutantStack : public std::stack<T> {
   public:
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;

        iterator begin() {
                return std::stack<T>::c.begin();
        }

        iterator end() {
                return std::stack<T>::c.end();
        }

        const_iterator begin() const {
                return std::stack<T>::c.begin();
        }

        const_iterator end() const {
                return std::stack<T>::c.end();
        }

        iterator rbegin() {
                return std::stack<T>::c.rbegin();
        }

        iterator rend() {
                return std::stack<T>::c.rend();
        }

        const_iterator rbegin() const {
                return std::stack<T>::c.rbegin();
        }

        const_iterator rend() const {
                return std::stack<T>::c.rend();
        }
    
};

#endif
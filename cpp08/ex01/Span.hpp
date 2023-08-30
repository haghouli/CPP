/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 19:38:40 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/28 15:21:48 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

class Span {
    private:
        unsigned int N;
        std::vector<int>  span;

    public:
        Span();
        Span(unsigned int n);
        Span(const Span & obj);
        Span & operator=(const Span & obj);
        ~Span();
        
        void addNumber(int n);

        void show();

        template<typename T>
        void    addNumber(T begin, T end) {
            T it;
            for(it = begin; it != end; it++) {
                if(span.size() > N)
                    throw FullSpanException();
                span.push_back(*it);
            }
        }

        unsigned int shortestSpan();
        unsigned int longestSpan();

        class FullSpanException : public std::exception {
            public:
                const char * what() const throw();
        };

        class EmptySpanException : public std::exception {
            public:
                const char * what() const throw();
        };
};

#endif
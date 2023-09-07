/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 07:07:06 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/31 15:44:58 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char * Span::FullSpanException::what() const throw() {
    return "The span is full";
}

const char * Span::EmptySpanException::what() const throw() {
    return "The span empty or has one element";
}

Span::Span() : N(0) { }

Span::Span(unsigned int n) : N(n) { }

Span::Span(const Span & obj) {
    *this = obj; 
};

Span & Span::operator=(const Span & obj) {
    if(this !=  &obj) {
        this->N = obj.N;
        span = obj.span;
    }
    return *this;
}

Span::~Span() { }

void Span::addNumber(int n) {
    if(N <= span.size())
        throw FullSpanException();
    span.push_back(n);
}

unsigned int Span::shortestSpan() {
    if(span.size() <= 1)
        throw EmptySpanException();

    std::vector<int> distences;
    std::vector<int> tmp = span;
    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::iterator it;

    for(it = tmp.begin(); it != tmp.end() - 1; ++it)
        distences.push_back(abs(*it - *(it + 1)));

    return *(std::min_element(distences.begin(), distences.end()));
}

unsigned int Span::longestSpan() {
    if(span.size() <= 1)
        throw EmptySpanException();
    std::vector<int> tmp =  span;
    std::sort(tmp.begin(), tmp.end());
    return (*(tmp.end() - 1) - *tmp.begin());
}
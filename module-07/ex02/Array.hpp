/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:36:24 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/26 15:32:02 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>

#include <stdlib.h>
#include <time.h>

template<typename T> class Array {
    private:
        T *a;
        unsigned int s;
    
    public:
        Array() : a(NULL) , s(0) { };

        Array(unsigned int n) : a(new T[n]) , s(n) { };

        Array(const Array & obj) {
            *this = obj;
        }

        Array & operator=(const Array & obj) {
            if(this != &obj) {
                this->s = obj.s;
                this->a = new T[obj.size()];
                for (size_t i = 0; i < obj.size(); i++)
                    this->a[i] = obj.a[i];
            }
            return *this;
        }

        int & operator[](int i) const {
            if(static_cast<unsigned int>(i) >= s)
                throw OutOfBound();
            return a[i];
        }

        unsigned int size() const {
            return s;
        }

        ~Array<T>(){
            delete [] a;
        }

        class OutOfBound : public std::exception {
            const char * what() const throw() {
                return "index out of bounds";
            }
        };
};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 09:36:24 by haghouli          #+#    #+#             */
/*   Updated: 2023/08/24 08:48:37 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include<iostream>

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
            if(this = &obj)
                return *this;
            this->size = obj.s;
            this->a = new T[obj.size()];
            for (size_t i = 0; i < obj.size(); i++)
                this->a[i] = obj.a[i];
            return *this;
        }

        unsigned int operator[](unsigned int i) {
            try {
                if(i >= size)
                    throw "index out of bounds";
            } catch(std::string & msg) {
                std::cout << msg << std::endl;
            }
            return a[i];
        }

        void operator new(unsigned int size) {
            
        }

        unsigned int size() const {
            return s;
        }

        ~Array<T>(){
            delete [] a;
        }
};

#endif
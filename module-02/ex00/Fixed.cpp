/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:59:15 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/15 08:50:43 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    raw = 0;
}

Fixed::Fixed(const Fixed & obj) {
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed & Fixed::operator=(const Fixed & obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if(this == &obj)
        return *this;
    this->raw = obj.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return raw;
}

void Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this->raw = raw;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

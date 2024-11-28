/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:59:46 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/15 10:14:56 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed() {
    std::cout << "Default constructor called" << std::endl;
    raw = 0;
}

Fixed::Fixed(int n) {
    std::cout << "Int constructor called" << std::endl;
    raw = n << fractional_bits;
}

Fixed::Fixed(const float n) {
    std::cout << "Float constructor called" << std::endl;
    raw = (int)(roundf(n * pow(2, fractional_bits)));
}

Fixed::Fixed(const Fixed & obj) {
    std::cout << "Copy constructor called" << std::endl;
    *this = obj;
}

Fixed & Fixed::operator=(const Fixed & obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if(this == &obj)
        return *this;
    this->raw = obj.raw;
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

float Fixed::toFloat( void ) const {
    return float(raw / pow(2, fractional_bits));
}

int Fixed::toInt( void ) const {
    return int(raw / pow(2, fractional_bits));
}

std::ostream & operator << (std::ostream & stream, const Fixed & obj) {
    stream << obj.toFloat();
    return stream;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

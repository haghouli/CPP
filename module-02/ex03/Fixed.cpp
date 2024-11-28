/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:01:09 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/11 10:49:14 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

/*******************************************************/
/********************* Constructors ********************/
/*******************************************************/

Fixed::Fixed() {
    raw = 0;
}

Fixed::Fixed(const int n) {
    raw = n << fractional_bits; 
}

Fixed::Fixed(const float n) {
    raw = (int)(roundf(n * 256));
}

Fixed::Fixed(const Fixed & obj) {
    raw = obj.getRawBits();
}

/*******************************************************/
/******************* geters & seters *******************/
/*******************************************************/

int Fixed::getRawBits(void) const {
    return raw;
}

void Fixed::setRawBits(int const raw) {
    this->raw = raw;
}

float Fixed::toFloat( void ) const {
    return (float)(raw / pow(2, 8));
}

int Fixed::toInt( void ) const {
    return int(raw / pow(2, 8));
}

/*******************************************************/
/********************** Destructor *********************/
/*******************************************************/

Fixed::~Fixed() {
    // std::cout << "Destructor called" << std::endl;
}

/*******************************************************/
/******************* operators overload ****************/
/*******************************************************/

const Fixed & Fixed::operator=(Fixed & obj) {
    this->raw = obj.raw;
    return *this;
}

std::ostream & operator << (std::ostream & stream, const Fixed & obj) {
    stream << obj.toFloat();
    return stream;
}

bool    Fixed::operator>(const Fixed obj) const {
    return toFloat() > obj.toFloat();
}

bool    Fixed::operator<(const Fixed obj) const {
    return toFloat() < obj.toFloat();
}

bool    Fixed::operator>=(const Fixed & obj) const {
    return toFloat() >= obj.toFloat();
}

bool    Fixed::operator<=(const Fixed & obj) const {
    return toFloat() <= obj.toFloat();
}

bool    Fixed::operator==(const Fixed & obj) const {
    return toFloat() == obj.toFloat();
}

bool    Fixed::operator!=(const Fixed & obj) const {
    return raw != obj.raw;
}

Fixed   Fixed::operator+(const Fixed & obj) {
    float result = toFloat() + obj.toFloat();
    return Fixed(result);
}

Fixed   Fixed::operator-(const Fixed & obj) {
    float result = toFloat() - obj.toFloat();
    return Fixed(result);
}

Fixed   Fixed::operator*(const Fixed & obj) {
    float result = toFloat() * obj.toFloat();
    return Fixed(result);
}

Fixed   Fixed::operator/(const Fixed & obj) {
    float result = toFloat() / obj.toFloat();
    return Fixed(result);
}

Fixed   Fixed::operator++() {
    raw++;
    float result = toFloat();
    return Fixed(result);
}

Fixed   Fixed::operator--() {
    raw--;
    float result = toFloat();
    return Fixed(result);
}

Fixed  Fixed::operator++(int) {
    float temp = toFloat();
    ++raw;
    return Fixed(temp);
}

Fixed  Fixed::operator--(int) {
    float temp = toFloat();
    raw--;
    return Fixed(temp);
}

/*******************************************************/
/********************* min max *************************/
/*******************************************************/

Fixed & Fixed::min(Fixed & f1, Fixed & f2) {
    return (f1 < f2) ? f1 : f2;
}

const Fixed & Fixed::min(const Fixed & f1, const Fixed & f2) {
    return (f1 < f2) ? f1 : f2;
}

Fixed & Fixed::max(Fixed & f1, Fixed  & f2) {
    return (f1 > f2) ? f1 : f2;
}

const Fixed & Fixed::max(const Fixed & f1, const Fixed & f2) {
    return (f1 > f2) ? f1 : f2;
}
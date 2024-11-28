/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:01:17 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/12 18:46:58 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>

class Fixed {
private:
    int raw;
    static const int fractional_bits = 8;

public:

    Fixed();
    Fixed(const int n);
    Fixed(const float n);
    Fixed(const Fixed & obj);
    const Fixed & operator=(Fixed & obj) ;
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);
    float toFloat( void ) const;
    int toInt( void ) const;

    bool    operator>(const Fixed obj) const;
    bool    operator<(const Fixed obj) const;
    bool    operator<=(const Fixed & obj) const;
    bool    operator>=(const Fixed & obj) const;
    bool    operator==(const Fixed & obj) const;
    bool    operator!=(const Fixed & obj) const;
    
    Fixed   operator+(const Fixed & obj);
    Fixed   operator-(const Fixed & obj);
    Fixed   operator*(const Fixed & obj);
    Fixed   operator/(const Fixed & obj);
    
    Fixed   operator++(int);
    Fixed   operator--(int);

    Fixed   operator++();
    Fixed   operator--();

    static Fixed & min(Fixed & f1, Fixed & f2);
    static const Fixed & min(const Fixed & f1, const Fixed & f2);

    static Fixed & max(Fixed & f1, Fixed & f2);
    static const Fixed & max(const Fixed & f1, const Fixed & f2);

};

std::ostream & operator << (std::ostream & stream, const Fixed & obj);
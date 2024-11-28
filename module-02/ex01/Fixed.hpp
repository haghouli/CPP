/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:59:57 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/15 09:54:29 by haghouli         ###   ########.fr       */
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
    Fixed & operator=(const Fixed & obj);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);

    float toFloat( void ) const;
    int toInt( void ) const;
};

std::ostream & operator << (std::ostream & stream, const Fixed & obj);
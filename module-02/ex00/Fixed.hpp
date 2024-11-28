/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 08:59:23 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/13 09:09:10 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed {
private:
    int raw;
    static const int fractional_bits = 8;

public:

    Fixed();
    Fixed(const Fixed & obj);
    Fixed & operator=(const Fixed & obj);
    ~Fixed();
    int getRawBits(void) const;
    void setRawBits(int const raw);

};
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:54:03 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/12 19:03:52 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef POINT_H
#define POINT_H

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed  x;
		const Fixed  y;

	public:
		Point();
		Point(const float x, const float y);
		Point(Point & p);
		// Point(const Point & p);
		const Point & operator=(const Point & p);
		~Point();
		Fixed get_x() const;
		Fixed get_y() const;
};


bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif

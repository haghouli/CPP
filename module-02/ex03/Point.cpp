/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: haghouli <haghouli@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 18:03:28 by haghouli          #+#    #+#             */
/*   Updated: 2023/07/15 10:54:00 by haghouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Point.hpp"

Point::Point(): x(0), y(0) { }

Point::Point(const float x, const float y) : x(x), y(y) { }

Point::Point(Point & p) : x(p.get_x()), y(p.get_y()) { }

const Point & Point::operator=(const Point & p){ return p; }

Fixed Point::get_x() const  {
	return this->x;
}

Fixed Point::get_y() const {
	return this->y;
}

Point::~Point() { }


float get_area(Point const & a, Point const & b, Point const & c) {
	
	Fixed up_group = (a.get_x() * b.get_y()) + (b.get_x() * c.get_y()) + (c.get_x() * a.get_y());
	Fixed low_group = (a.get_y() * b.get_x()) + (b.get_y() * c.get_x()) + (c.get_y() * a.get_x());
	Fixed result = up_group - low_group;
	if(result < 0)
		result.setRawBits(result.getRawBits() * -1);
	return result.toFloat() / 2;
}

bool bsp(Point const a, Point const b, Point const c, Point const point) {

	Fixed full_area = get_area(a, b, c);
	Fixed area_1 = get_area(a, point, c);
	Fixed area_2 = get_area(a, b, point);
	Fixed area_3 = get_area(point, b, c);

	if(area_1 == 0 || area_2 == 0 || area_3 == 0)
		return false;
	Fixed sum = area_1 + area_2 + area_3;
	if(sum == full_area)
		return true;
	return false;
}

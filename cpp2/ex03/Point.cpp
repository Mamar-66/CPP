/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:20:43 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/10 08:00:23 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void)
	: _x(0), _y(0)
{
}

Point::Point(float x, float y)
	: _x(x), _y(y)
{
}

Point::Point(const Point& point)
	: _x(point._x), _y(point._y)
{	
}

Point::~Point(void)
{
	//std::cout << "Point destructor called" << std::endl;
}

Point&	Point::operator=(const Point &point)
{
	(void)point;
	std::cout << "Assignment of const variables impossible" << std::endl;
	return *this;
}

Fixed	const Point::getFixedX(void) const
{
	return this->_x;
}

Fixed	const Point::getFixedY(void) const
{
	return this->_y;
}


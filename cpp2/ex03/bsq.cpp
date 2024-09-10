/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:14:47 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/10 07:18:14 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

std::ostream	&operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

static Fixed	area(Point const a, Point const b, Point const c)
{

	Fixed resul;

	resul = Fixed( (a.getFixedX() * ( b.getFixedY() - c.getFixedY() ) +
				 b.getFixedX() * ( c.getFixedY() - a.getFixedY() ) +
				 c.getFixedX() * ( a.getFixedY() - b.getFixedY() )));
	//resul = resul / 2;
	if (resul < 0)
		resul = resul * -1;
	return (resul);
}

bool bsq(Point const a, Point const b, Point const c, Point const point)
{
	Fixed area_origin;
	Fixed area1;
	Fixed area2;
	Fixed area3;

	area_origin = area(a, b, c);
	area1 = area(point, b, c);
	area2 = area(a, point, c);
	area3 = area(a, b, point);

	//std::cout << area_origin << std::endl;
	//std::cout << area1 << std::endl;
	//std::cout << area2 << std::endl;
	//std::cout << area3 << std::endl;

	if (area1 == 0 || area2 == 0 || area3 == 0)
		return false;
	if (area_origin != (area1 + area2 + area3))
		return false;
	return (true);
}

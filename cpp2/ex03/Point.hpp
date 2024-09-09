/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:10:08 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/09 17:14:10 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_H
	#define POINT_H

	#include "Fixed.hpp"

	class Point
	{
		public :
			Point(void);
			Point(float x, float y);
			Point(const Point& point);
			~Point(void);

			Fixed const getFixedX(void) const;
			Fixed const getFixedY(void) const;

		private:
			const Fixed		_x;
			const Fixed		_y;
	};

	bool bsq(Point const a, Point const b, Point const c, Point const point);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 17:10:08 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/08 17:41:58 by omfelk           ###   ########.fr       */
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

		private :
			const Fixed _x;
			const Fixed _y;

	};

#endif
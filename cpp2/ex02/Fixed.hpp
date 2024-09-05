/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:38:54 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/04 14:14:10 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_hpp
	#define Fixed_hpp

	#include <iostream>
	#include <cmath>

	class	Fixed
	{
		public :
			Fixed();
			Fixed(const int nb);
			Fixed(const float nb);
			Fixed(const Fixed &fixed);
			~Fixed();

			bool 		operator>(const Fixed fixed);
			bool 		operator<(const Fixed fixed);
			bool 		operator>=(const Fixed fixed);
			bool 		operator<=(const Fixed fixed);
			bool 		operator==(const Fixed fixed);
			bool 		operator!=(const Fixed fixed);

			Fixed		operator+(const Fixed& fixed);
			Fixed		operator-(const Fixed& fixed);
			Fixed		operator*(const Fixed& fixed);
			Fixed		operator/(const Fixed& fixed);

			Fixed		&operator++(void);
			Fixed		&operator--(void);
			Fixed		operator++(int);
			Fixed		operator--(int);
			Fixed 		&operator=(const Fixed &asignement);

			int			getRawBits(void) const;
			void		setRawBits(int const raw);

			float		toFloat(void) const;
			int			toInt(void) const;

		private :
			int					_fixedPoint;
			static int const	_bitNb = 8;
	};

#endif
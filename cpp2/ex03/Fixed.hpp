/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:38:54 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/10 07:55:17 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_hpp
	#define Fixed_hpp

	#include <iostream>
	#include <cmath>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

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
			Fixed		operator-(const Fixed& fixed) const;
			Fixed		operator*(const Fixed& fixed) const;
			Fixed		operator/(const Fixed& fixed) const;

			Fixed		&operator++(void);
			Fixed		&operator--(void);
			Fixed		operator++(int);
			Fixed		operator--(int);
			Fixed 		&operator=(const Fixed &asignement);

			int			getRawBits(void) const;
			int			getFixedPoint(void) const;
			void		setRawBits(int const raw);

			float		toFloat(void) const;
			int			toInt(void) const;

			static			Fixed&	min(Fixed& a, Fixed& b);
			static const	Fixed&	min(const Fixed& a, const Fixed& b);
			static			Fixed&	max(Fixed& a, Fixed& b);
			static const	Fixed&	max(const Fixed& a, const Fixed& b);

		private :
			int					_fixedPoint;
			static int const	_bitNb = 8;
	};

#endif
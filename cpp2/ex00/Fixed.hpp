/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:38:54 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/31 17:17:24 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Fixed_hpp
	#define Fixed_hpp

	#include <iostream>

	class	Fixed
	{
		public :
			Fixed();
			Fixed(const Fixed &fixed);
			Fixed &operator=(const Fixed& asignement);
			~Fixed();


			int		getRawBits(void) const;
			void	setRawBits(int const raw);

		private :
			int					_fixedPoint;
			static int const	_bitNb = 8;
	};

#endif
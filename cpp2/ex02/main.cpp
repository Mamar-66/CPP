/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:37:21 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/06 10:46:11 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream	&operator<<(std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

int	main(void) 
{
	std::string t(50, '-');

	std::cout << t << std::endl;
	{
		Fixed			a;
		Fixed const		b(Fixed(5.05f) * Fixed(2));

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;

		std::cout << b << std::endl;

		std::cout << Fixed::max(a, b) << std::endl;
	}
	std::cout << t << std::endl;
	{
		Fixed			a = 10;

		std::cout << a << std::endl;
		std::cout << --a << std::endl;
		std::cout << a << std::endl;
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;
	}
	std::cout << t << std::endl;
	{
		Fixed a(42);
		Fixed b(42.42f);

		
		std::cout << "a + b = " << Fixed( a + b ) << std::endl;
		std::cout << "a - b = " << Fixed( a - b ) << std::endl;
		std::cout << "a * b = " << Fixed( a * b ) << std::endl;
		std::cout << "a / b = " << Fixed( a / b ) << std::endl;
	}
	std::cout << t << std::endl;
	{
		Fixed a(42);
		Fixed b(42.42f);

		
		std::cout << "a < b = " << Fixed( a < b ) << std::endl;
		std::cout << "a > b = " << Fixed( a > b ) << std::endl;
		std::cout << "a <= b = " << Fixed( a <= b ) << std::endl;
		std::cout << "a >= b = " << Fixed( a >= b ) << std::endl;
		std::cout << "a == b = " << Fixed( a == b ) << std::endl;
		std::cout << "a != b = " << Fixed( a != b ) << std::endl;
	}
	std::cout << t << std::endl;
	{

		std::cout << "test tratiqe function " << std::endl;
		std::cout << Fixed::max(10, 20) << std::endl;
		std::cout << Fixed::max(20, 10) << std::endl;
		std::cout << Fixed::min(20, 10) << std::endl;
		std::cout << Fixed::min(20, 10) << std::endl;
	}
	std::cout << t << std::endl;
	return 0;
}

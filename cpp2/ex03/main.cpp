/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:37:21 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/10 08:01:43 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int	main(void) 
{
	Point a(4.5, 5);
	Point b(6.5, 2);
	Point c(3.5, 2);

	{
		Point p(c);
		Point p1(6.5, 2);
		Point p2(4.5, 5);

		std::cout << GREEN "Test sommet" RESET << std::endl;
		std::cout << "the point 3.5, 2 is " << (bsq(a, b, c, p) ? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
		std::cout << "the point 6.5, 2 is " << (bsq(a, b, c, p1)? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
		std::cout << "the point 4.5, 5 is " << (bsq(a, b, c, p2)? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
	}
	{
		Point p(5, 2);
		Point p1(4, 2);
		Point p2(6, 2);

		std::cout << GREEN "Test sur arrete" RESET << std::endl;
		std::cout << "the point 5, 2 is " << (bsq(a, b, c, p)? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
		std::cout << "the point 4, 2 is " << (bsq(a, b, c, p1)? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
		std::cout << "the point 6, 5 is " << (bsq(a, b, c, p2)? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
	}
	{
		Point p(4, 4);
		Point p1(6, 4);
		Point p2(5, 4.5);

		std::cout << GREEN "Test externe triangle" RESET << std::endl;
		std::cout << "the point 4, 4 is " << (bsq(a, b, c, p)? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
		std::cout << "the point 6, 4 is " << (bsq(a, b, c, p1)? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
		std::cout << "the point 5, 4.5 is " << (bsq(a, b, c, p2)? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
	}
	{
		Point p(4, 2.1);
		Point p1(5, 3);
		Point p2(4.5, 4.5);

		std::cout << GREEN "Test in triangle" RESET << std::endl;
		std::cout << "the point 4, 2.1 is " << (bsq(a, b, c, p)? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
		std::cout << "the point 5, 3 is " << (bsq(a, b, c, p1)? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
		std::cout << "the point 4.5, 4.5 is " << (bsq(a, b, c, p2)? GREEN "in" RESET : RED "not in" RESET) << " triangle" << std::endl;
	}
	return 0;
}

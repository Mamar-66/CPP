/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:00:32 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/04 13:19:25 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"
#include <ctime>

int main()
{
	std::cout << std::string(50,'-') << std::endl;
	std::cout << "try overtaking size max" << std::endl;
	{
		Span sp = Span(5);
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(42);
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::string(50,'-') << std::endl;
	std::cout << "try one nb end zero nb in contenaire" << std::endl;
	{
		{
			Span sp = Span(5);

			sp.addNumber(6);

			try
			{
				std::cout << sp.shortestSpan() << std::endl;
			}
			catch(const std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
		{
			Span sp = Span(5);

			try
			{
				std::cout << sp.longestSpan() << std::endl;
			}
			catch(const std::exception &e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
	std::cout << std::string(50,'-') << std::endl;
	std::cout << "TEST EXO" << std::endl;
	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	std::cout << std::string(50,'-') << std::endl;
	std::cout << "MY TEST" << std::endl;
	{
		std::vector<unsigned int>	tmp;
		Span 						sp = Span(15000);

		std::srand(std::time(NULL));

		for (int i = 0; i < 15000; i++)
		{
			tmp.push_back((std::rand() % 30000) + 1);
		}

		try
		{
			sp.addNb(tmp.begin(), tmp.end());

			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

	return 0;
}

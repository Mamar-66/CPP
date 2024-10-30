/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:50:33 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/30 16:35:12 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iomanip>

int	main()
{
std::cout << BLUE << std::string(50, '-') << RESET << std::endl;
	{
		std::cout << GREEN << "INT" << RESET << std::endl;
		Array<int>	tab1(5);

		for (int i = 0; i < tab1.size(); i++)
		{
			try
			{
				std::cout << "tab : " << tab1[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	std::cout << BOLD << std::string(50, '-') << RESET << std::endl;
		for (int i = 0; i < tab1.size(); i++)
		{
			tab1[i] = i;
		}
		for (int i = -2; i < 7; i++)
		{
			try
			{
				std::cout << "tab : " << tab1[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
std::cout << BLUE << std::string(50, '-') << RESET << std::endl;
std::cout << BLUE << std::string(50, '-') << RESET << std::endl;
	{
		std::cout << GREEN << "FLOAT" << RESET << std::endl;
		Array<float>	tab1(5.0f);

		for (float i = 0.0f; i < tab1.size(); i++)
		{
			try
			{
				std::cout << "tab : " << std::fixed << std::setprecision(2) << tab1[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	std::cout << BOLD << std::string(50, '-') << RESET << std::endl;
		for (float i = 0; i < tab1.size(); i++)
		{
			tab1[i] = i;
		}
		for (float i = -2.0f; i < 7; i++)
		{
			try
			{
				std::cout << "tab : " << std::fixed << std::setprecision(2) << tab1[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
std::cout << BLUE << std::string(50, '-') << RESET << std::endl;
std::cout << BLUE << std::string(50, '-') << RESET << std::endl;
	{
		std::cout << GREEN << "DOUBLE" << RESET << std::endl;
		Array<float>	tab1(5);

		for (double i = 0.0; i < tab1.size(); i++)
		{
			try
			{
				std::cout << "tab : " << std::fixed << std::setprecision(2) << tab1[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	std::cout << BOLD << std::string(50, '-') << RESET << std::endl;
		for (double i = 0; i < tab1.size(); i++)
		{
			tab1[i] = i;
		}
		for (double i = -2; i < 7; i++)
		{
			try
			{
				std::cout << "tab : " << std::fixed << std::setprecision(2) << tab1[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
std::cout << BLUE << std::string(50, '-') << RESET << std::endl;
std::cout << BLUE << std::string(50, '-') << RESET << std::endl;
	{
		std::cout << GREEN << "STRING" << RESET << std::endl;
		Array<std::string>	tab1(5);

		std::string phrases[5] = {
			"The early bird catches the worm.",
			"A journey of a thousand miles begins with a single step.",
			"When in Rome, do as the Romans do.",
			"Actions speak louder than words.",
			"The pen is mightier than the sword."
    	};

		for (int i = 0; i < tab1.size(); i++)
		{
			try
			{
				std::cout << "tab : " << tab1[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	std::cout << BOLD << std::string(50, '-') << RESET << std::endl;
		for (int i = 0; i < tab1.size(); i++)
		{
			tab1[i] = phrases[i];
		}
		for (int i = -2; i < 7; i++)
		{
			try
			{
				std::cout << "tab : " << tab1[i] << std::endl;
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	}
std::cout << BLUE << std::string(50, '-') << RESET << std::endl;

	return 0;
}


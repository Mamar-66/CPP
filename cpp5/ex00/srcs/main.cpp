/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:32:51 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/16 12:54:53 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"

int	main()
{
std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat high("high", 0);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat low("low", 151);
		}
		catch (const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
std::cout << std::string(50, '-') << std::endl;
	{
		Bureaucrat test1("test1", 2);

		try
		{
			std::cout << test1 << std::endl;

			test1.incrementGrade();

			std::cout << test1 << std::endl;

			test1.incrementGrade();

			std::cout << test1 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
std::cout << std::string(50, '-') << std::endl;
	{
		Bureaucrat test2("test2", 149);

		try
		{
			std::cout << test2 << std::endl;

			test2.decrementGrade();

			std::cout << test2 << std::endl;

			test2.decrementGrade();

			std::cout << test2 << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	return 0;
}

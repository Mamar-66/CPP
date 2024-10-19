/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:32:51 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/19 17:27:44 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

int	main()
{

std::cout << RED <<  std::string(100, '-') << RESET << std::endl;
std::cout << ORANGE << std::string(100, '-') << RESET << std::endl;
	{

		Bureaucrat				bureaucrat("human0", 146);
		ShrubberyCreationForm	home("home");
		RobotomyRequestForm		robot("robot");
		PresidentialPardonForm	president("president");

		std::cout << bureaucrat << std::endl;
		{
			{
				bureaucrat.signForm(home);
			}
			bureaucrat.executeForm(home);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			{
				bureaucrat.signForm(robot);
			}
			bureaucrat.executeForm(robot);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			{
				bureaucrat.signForm(president);
			}
			bureaucrat.executeForm(president);
		}
	}
std::cout << ORANGE << std::string(100, '-') << RESET << std::endl;
	{

		Bureaucrat				bureaucrat_home("human_home", 144);
		Bureaucrat				bureaucrat_robot("human_robot", 70);
		Bureaucrat				bureaucrat_president("human_robot", 20);
		ShrubberyCreationForm	home("home");
		RobotomyRequestForm		robot("robot");
		PresidentialPardonForm	president("president");


		std::cout << bureaucrat_home << std::endl;
		std::cout << bureaucrat_robot << std::endl;

		{
			try
			{
				bureaucrat_home.signForm(home);
			}
			catch(const ShrubberyCreationForm::GradeTooLow& e)
			{
				std::cerr << e.what() << std::endl;
			}

			bureaucrat_home.executeForm(home);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			try
			{
				bureaucrat_robot.signForm(robot);
			}
			catch(const ShrubberyCreationForm::GradeTooLow& e)
			{
				std::cerr << e.what() << std::endl;
			}

			bureaucrat_robot.executeForm(robot);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			try
			{
				bureaucrat_president.signForm(president);
			}
			catch(const ShrubberyCreationForm::GradeTooLow& e)
			{
				std::cerr << e.what() << std::endl;
			}

			bureaucrat_president.executeForm(president);
		}
	}
std::cout << ORANGE << std::string(100, '-') << RESET << std::endl;
 	{
		Bureaucrat				bureaucrat_home("human_home", 130);
		Bureaucrat				bureaucrat_robot("human_robot", 40);
		Bureaucrat				bureaucrat_president("human_robot", 5);
		ShrubberyCreationForm	home("home");
		RobotomyRequestForm		robot("robot");
		PresidentialPardonForm	president("president");
			
		std::cout << bureaucrat_home << std::endl;
		std::cout << bureaucrat_robot << std::endl;

		{
			try
			{
				bureaucrat_home.signForm(home);
			}
			catch(const ShrubberyCreationForm::GradeTooLow& e)
			{
				std::cerr << e.what() << std::endl;
			}

			bureaucrat_home.executeForm(home);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			try
			{
				bureaucrat_robot.signForm(robot);
			}
			catch(const ShrubberyCreationForm::GradeTooLow& e)
			{
				std::cerr << e.what() << std::endl;
			}

			bureaucrat_robot.executeForm(robot);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			try
			{
				bureaucrat_president.signForm(president);
			}
			catch(const ShrubberyCreationForm::GradeTooLow& e)
			{
				std::cerr << e.what() << std::endl;
			}

			bureaucrat_president.executeForm(president);
		}
 	}
std::cout << ORANGE << std::string(100, '-') << RESET << std::endl;
std::cout << RED <<  std::string(100, '-') << RESET << std::endl;
	return 0;
}

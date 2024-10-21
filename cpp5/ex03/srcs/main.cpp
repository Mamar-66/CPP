/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:32:51 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/21 10:25:32 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotomyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"

int	main()
{
std::cout << RED <<  std::string(100, '-') << RESET << std::endl;
std::cout << ORANGE << std::string(100, '-') << RESET << std::endl;
	{

		Bureaucrat				bureaucrat_home("human_home", 146);
		AForm					*form1;
		AForm					*form2;
		AForm					*form3;
		AForm					*form4;
		Intern					stagiaire;

		{
			try
			{
				form1 = stagiaire.makeForm("Shrubbery", "home");
				form2 = stagiaire.makeForm("Robotomy", "robo");
				form3 = stagiaire.makeForm("Presient", "president");
				form4 = stagiaire.makeForm("notExist", "notExist");
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		std::cout << bureaucrat_home << std::endl;
		{
			{
				bureaucrat_home.signForm(*form1);
			}
			bureaucrat_home.executeForm(*form1);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			{
				bureaucrat_home.signForm(*form2);
			}
			bureaucrat_home.executeForm(*form2);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			{
				bureaucrat_home.signForm(*form3);
			}
			bureaucrat_home.executeForm(*form3);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;

		if (form1) delete form1;
		if (form2) delete form2;
		if (form3) delete form3;
	}
std::cout << ORANGE << std::string(100, '-') << RESET << std::endl;
	{

		Bureaucrat				bureaucrat_home("human_home", 140);
		Bureaucrat				bureaucrat_robot("human_home", 70);
		Bureaucrat				bureaucrat_president("human_home", 20);
		AForm					*form1;
		AForm					*form2;
		AForm					*form3;
		AForm					*form4;
		Intern					stagiaire;

		{
			try
			{
				form1 = stagiaire.makeForm("Shrubbery", "home");
				form2 = stagiaire.makeForm("Robotomy", "robo");
				form3 = stagiaire.makeForm("Presient", "president");
				form4 = stagiaire.makeForm("notExist", "notExist");
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		std::cout << bureaucrat_home << std::endl;
		{
			{
				bureaucrat_home.signForm(*form1);
			}
			bureaucrat_home.executeForm(*form1);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			{
				bureaucrat_robot.signForm(*form2);
			}
			bureaucrat_robot.executeForm(*form2);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			{
				bureaucrat_president.signForm(*form3);
			}
			bureaucrat_president.executeForm(*form3);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;

		if (form1) delete form1;
		if (form2) delete form2;
		if (form3) delete form3;
	}
std::cout << ORANGE << std::string(100, '-') << RESET << std::endl;
	{

		Bureaucrat				bureaucrat_home("human_home", 1);
		Bureaucrat				bureaucrat_robot("human_home", 1);
		Bureaucrat				bureaucrat_president("human_home", 1);
		AForm					*form1;
		AForm					*form2;
		AForm					*form3;
		AForm					*form4;
		Intern					stagiaire;

		{
			try
			{
				form1 = stagiaire.makeForm("Shrubbery", "home");
				form2 = stagiaire.makeForm("Robotomy", "robo");
				form3 = stagiaire.makeForm("Presient", "president");
				form4 = stagiaire.makeForm("notExist", "notExist");
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
			}
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		std::cout << bureaucrat_home << std::endl;
		{
			{
				bureaucrat_home.signForm(*form1);
			}
			bureaucrat_home.executeForm(*form1);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			{
				bureaucrat_robot.signForm(*form2);
			}
			bureaucrat_robot.executeForm(*form2);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;
		{
			{
				bureaucrat_president.signForm(*form3);
			}
			bureaucrat_president.executeForm(*form3);
		}
	std::cout << BLUE << std::string(100, '-') << RESET << std::endl;

		if (form1) delete form1;
		if (form2) delete form2;
		if (form3) delete form3;
	}
std::cout << ORANGE << std::string(100, '-') << RESET << std::endl;
std::cout << RED <<  std::string(100, '-') << RESET << std::endl;
	return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:32:51 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/18 15:10:26 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int	main()
{

std::cout << std::string(50, '-') << std::endl;
	{

		Bureaucrat				bureaucrat("human0", 146);
		ShrubberyCreationForm	home("home");
			

		std::cout << bureaucrat << std::endl;
		bureaucrat.executeForm(home);
	}
std::cout << std::string(50, '-') << std::endl;
	{

		Bureaucrat				bureaucrat("human0", 144);
		ShrubberyCreationForm	home("home");
			

		std::cout << bureaucrat << std::endl;

		try
		{
			bureaucrat.signForm(home);
		}
		catch(const ShrubberyCreationForm::GradeTooLow& e)
		{
			std::cerr << e.what() << std::endl;
		}

		bureaucrat.executeForm(home);
	}
 std::cout << std::string(50, '-') << std::endl;
 	{
		Bureaucrat				bureaucrat("human0", 130);
		ShrubberyCreationForm	home("home");
			

		std::cout << bureaucrat << std::endl;

		try
		{
			bureaucrat.signForm(home);
		}
		catch(const ShrubberyCreationForm::GradeTooLow& e)
		{
			std::cerr << e.what() << std::endl;
		}

		bureaucrat.executeForm(home);
 	}
 std::cout << std::string(50, '-') << std::endl;
// 	{
// 		Bureaucrat	test1("test4_buraucrat", 100);
// 		Form		form3("test4_form", 100, 100);

// 		try
// 		{
// 			std::cout << form3 << std::endl;
// 			test1.signForm(form3);
// 			std::cout << form3 << std::endl;
// 		}
// 		catch(const Form::GradeTooLow& e)
// 		{
// 			std::cerr << e.what() << std::endl;
// 		}
// 	}
	return 0;
}

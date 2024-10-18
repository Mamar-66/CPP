/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:32:51 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/18 12:10:08 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"

int	main()
{

	std::cout << "Hello word" << std::endl;
std::cout << std::string(50, '-') << std::endl;
	{
		try
		{
			Bureaucrat				br0("br0", 146);
			ShrubberyCreationForm	home("home");
			

			std::cout << br0 << std::endl;
			br0.executeForm(home);
		}
		catch (const AForm::GradeTooHighException& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
std::cout << std::string(50, '-') << std::endl;
// 	{
// 		try
// 		{
// 			Form form2("test2", 151, 151);
// 		}
// 		catch (const Form::GradeTooLowException& e)
// 		{
// 			std::cerr << e.what() << std::endl;
// 		}
// 	}
// std::cout << std::string(50, '-') << std::endl;
// 	{
// 		Bureaucrat	test1("test3_buraucrat", 150);
// 		Form		form3("test3_form", 100, 100);

// 		try
// 		{
// 			test1.signForm(form3);
// 		}
// 		catch(const Form::GradeTooLow& e)
// 		{
// 			std::cerr << e.what() << std::endl;
// 		}
// 	}
// std::cout << std::string(50, '-') << std::endl;
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

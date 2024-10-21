/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 08:52:28 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/21 10:19:21 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
	std::cout << ORANGE "Constructeur Intern called" RESET << std::endl;
}

Intern::~Intern()
{
	std::cout << ORANGE "Destructor Intern called" RESET << std::endl;
}

const char* Intern::InvalidForm::what() const throw()
{
	return "Invalid Form type";
}

AForm*	Intern::makeForm(const std::string& name_form, const std::string& target) const
{
	int i = 0;
	AForm* return_result = NULL;

	std::string	tab_form[3] = 
	{
		"Shrubbery",
		"Robotomy",
		"Presient"
	};
	
	while (i < 3 && tab_form[i] != name_form)
		i++;

	switch (i)
	{
		case 0 :
			return_result = new ShrubberyCreationForm(target);
			break;
		case 1 :
			return_result = new RobotomyRequestForm(target);
			break;
		case 2 :
			return_result = new PresidentialPardonForm(target);
			break;
		default:
			throw Intern::InvalidForm();
			break;
	}

	std::cout << GREEN "Intern creates " << name_form << RESET << std::endl; 
	return return_result;
}

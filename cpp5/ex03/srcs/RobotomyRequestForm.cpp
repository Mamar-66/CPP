/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:37:39 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/19 17:04:36 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() :
	AForm("default_RobotomyRequestForm", "default_target", 72, 45)
{
	std::cout << ORANGE "Constructeur RobotomyRequestForm >> " RED << this->getName() << " << called" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :
	AForm("_RobotomyRequestForm", target, 72, 45)
{
	std::cout << ORANGE "Constructeur RobotomyRequestForm >> " RED << this->getName() << " << called" RESET << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) :
	AForm(other)
{
	std::cout << ORANGE "Copy Constructeur RobotomyRequestForm >> " RED << this->getName() << " << called" RESET << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << ORANGE "Destructor RobotomyRequestForm >> " RED << this->getName() << " << called" RESET << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	this->AForm::operator=(other);
	return *this;
}

void	RobotomyRequestForm::execute_action(const Bureaucrat& other) const
{
	this->AForm::execute(other);
	std::cout << GREEN "brrrrrr brrrrrr brrrrr brrrrr brrrrr" RESET << std::endl;
	
	srand(static_cast<unsigned int>(time(0)));

	if (rand() % 2 == 0)
		std::cout  << GREEN <<  this->getTarget() << " sucess romotomized" RESET << std::endl;
	else
		std::cout  << GREEN <<  this->getTarget() << RED " romotomized failed" RESET << std::endl;
}

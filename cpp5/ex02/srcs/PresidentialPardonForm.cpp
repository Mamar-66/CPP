/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/19 17:12:32 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/19 17:21:29 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() :
	AForm("Defult_PresidentialPardonForm", "Defaul_target", 25, 5)
{
	std::cout << ORANGE "Constructeur PresidentialPardonForm >> " RED << this->getName() << " << called" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :
	AForm("Defult_PresidentialPardonForm", target, 25, 5)
{
	std::cout << ORANGE "Constructeur PresidentialPardonForm >> " RED << this->getName() << " << called" RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& other) :
	AForm(other)
{
	std::cout << ORANGE "Copy Constructeur PresidentialPardonForm >> " RED << this->getName() << " << called" RESET << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << ORANGE "Destructor PresidentialPardonForm >> " RED << this->getName() << " << called" RESET << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& other)
{
	this->AForm::operator=(other);
	return *this;
}

void	PresidentialPardonForm::execute_action(const Bureaucrat& other) const
{
	this->AForm::execute(other);
	std::cout << GREEN << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" RESET << std::endl;
}

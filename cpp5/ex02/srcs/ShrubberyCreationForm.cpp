/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:24:56 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/18 12:17:26 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
	AForm("Default_ShrubberyCreationForm", 145, 137)
{
	std::cout << ORANGE "Constructeur >> " RED << this->getName() << " << called" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string name) :
	AForm(name + "_ShrubberyCreationForm", 145, 137)
{
	std::cout << ORANGE "Constructeur >> " RED << this->getName() << " << called" RESET << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) :
	AForm(other)
{
	std::cout << ORANGE "Copy Constructeur >> " RED << this->getName() << " << called" RESET << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << ORANGE "Destructor >> " RED << this->getName() << " << called" RESET << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	this->AForm::operator=(other);
	return *this;
}

void	ShrubberyCreationForm::execute_action(const Bureaucrat& other) const
{
	this->AForm::execute(other);
	std::ofstream file(this->getTarget() + "_shrubbry");

	if (!file.is_open())
		throw std::ofstream::failure(strerror(errno));

	file <<" 	    ccee88oo                  ccee88oo                ccee88oo "<< std::endl;
	file <<"   C8O8O8Q8PoOb o8oo         C8O8O8Q8PoOb o8oo         C8O8O8Q8PoOb o8oo "<< std::endl;
	file <<"  dOB69QO8PdUOpugoO9bD     dOB69QO8PdUOpugoO9bD      dOB69QO8PdUOpugoO9bD "<< std::endl;
	file <<" CgggbU8OU qOp qOdoUOdcb  CgggbU8OU qOp qOdoUOdcb   CgggbU8OU qOp qOdoUOdcb "<< std::endl;
	file <<"     6OuU  /p u gcoUodpP      6OuU  /p u gcoUodpP     6OuU  /p u gcoUodpP "<< std::endl;
	file <<"       ///  /douUP            ///  /douUP           /////  /douUP "<< std::endl;
	file <<"         |||||||                  |||||||                 ||||||| "<< std::endl;
	file <<"          |||||                    |||||                   ||||| "<< std::endl;
	file <<"          |||||                    |||||                   ||||| "<< std::endl;
	file <<"          |||||                    |||||                   ||||| "<< std::endl;
	file <<"     .....|||||....          .....|||||....           .....|||||.... "<< std::endl;

}

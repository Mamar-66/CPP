/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:39:35 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/23 13:43:05 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("default_WrongAnimal")
{
	std::cout << RED "Default_WrongAnimal" GREEN " constructor called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type)
{
	std::cout << GREEN "Constructor \"WrongAnimal\" >> " RED << type << GREEN " << called" RESET << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal) : _type(wrongAnimal._type)
{
	std::cout << GREEN "Copy >> " RED << wrongAnimal._type << GREEN " << called" <<  RESET << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << GREEN "Destructor WrongAnimal " RED << this->_type << GREEN " called" RESET << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
	this->_type = wrongAnimal._type;
	return *this;
}

std::string	WrongAnimal::getType(void) const
{
	return this->_type;
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << ORANGE "WrongAnimal_Animal WrongAnimal_Animal WrongAnimal_Animal WrongAnimal_Animal WrongAnimal_Animal WrongAnimal_Animal WrongAnimal_Animal" RESET << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:55:55 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/23 12:38:34 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("default_animal")
{
	std::cout << RED "Default_animal" GREEN " constructor called" RESET << std::endl;
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << GREEN "Constructor \"Animal\" >> " RED << type << GREEN " << called" RESET << std::endl;
}

Animal::Animal(const Animal& animal) : _type(animal._type)
{
	std::cout << GREEN "Copy >> " RED << animal._type << GREEN " << called" <<  RESET << std::endl;
}

Animal::~Animal(void)
{
	std::cout << GREEN "Destructor Animal " RED << this->_type << GREEN " called" RESET << std::endl;
}

Animal&	Animal::operator=(const Animal& animal)
{
	this->_type = animal._type;
	return *this;
}

std::string	Animal::getType(void) const
{
	return this->_type;
}

void	Animal::makeSound(void) const
{
	std::cout << ORANGE "Animal Animal Animal Animal Animal Animal Animal" RESET << std::endl;
}

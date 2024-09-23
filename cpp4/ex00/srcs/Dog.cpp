/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:56:42 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/23 13:03:57 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << RED "Default_Dog" GREEN " constructor called" RESET << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << GREEN "Constructor \"Dog\" >> " RED << type << GREEN " << called" RESET << std::endl;
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	std::cout << GREEN "Copy >> " RED << dog._type << GREEN " << called" <<  RESET << std::endl;
}

Dog::~Dog(void)
{
	std::cout << GREEN "Destructor Dog " RED << this->_type << GREEN " called" RESET << std::endl;
}

Dog&	Dog::operator=(const Dog& dog)
{
	this->_type = dog._type;
	return *this;
}

void	Dog::makeSound(void) const 
{
	std::cout << ORANGE "Woaf Woaf Woaf Woaf Woaf Woaf Woaf Woaf Woaf Woaf Woaf Woaf " RESET << std::endl;
}

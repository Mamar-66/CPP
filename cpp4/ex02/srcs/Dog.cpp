/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:56:42 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/05 13:50:56 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog"), _brain(new Brain())
{
	std::cout << RED "Default_Dog" GREEN " constructor called" RESET << std::endl;
}

Dog::Dog(std::string type) : Animal(type), _brain(new Brain())
{
	std::cout << GREEN "Constructor \"Dog\" >> " RED << type << GREEN " << called" RESET << std::endl;
}

Dog::Dog(const Dog& dog) : Animal(dog)
{
	this->_brain = new Brain(*dog._brain);
	std::cout << GREEN "Copy >> " RED << dog._type << GREEN " << called" <<  RESET << std::endl;
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << GREEN "Destructor Dog " RED << this->_type << GREEN " called" RESET << std::endl;
}

Dog&	Dog::operator=(const Dog& dog)
{
	this->_type = dog._type;
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*dog._brain);
	return *this;
}

Brain*	Dog::getBrain(void) const
{
	return this->_brain;
}

void	Dog::makeSound(void) const 
{
	std::cout << ORANGE "Woaf Woaf Woaf Woaf Woaf Woaf Woaf Woaf Woaf Woaf Woaf Woaf " RESET << std::endl;
}

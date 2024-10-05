/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:16:02 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/05 13:53:32 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat"), _brain(new Brain())
{
	std::cout << RED "Default_Cat" GREEN " constructor called" RESET << std::endl;
}

Cat::Cat(std::string type) : Animal(type), _brain(new Brain())
{
	std::cout << GREEN "Constructor \"Cat\" >> " RED << type << GREEN " << called" RESET << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	this->_brain = new Brain(*cat._brain);
	std::cout << GREEN "Copy >> " RED << cat._type << GREEN " << called" <<  RESET << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << GREEN "Destructor Cat " RED << this->_type << GREEN " called" RESET << std::endl;
}

Cat&	Cat::operator=(const Cat& cat)
{
	this->_type = cat._type;
	if (this->_brain)
		delete this->_brain;
	this->_brain = new Brain(*cat._brain);
	return *this;
}

Brain*	Cat::getBrain(void) const
{
	return this->_brain;
}

void	Cat::makeSound(void) const 
{
	std::cout << ORANGE "Miawouuu Miawouuu Miawouuu Miawouuu Miawouuu Miawouuu Miawouuu Miawouuu" RESET << std::endl;
}
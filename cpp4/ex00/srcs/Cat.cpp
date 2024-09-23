/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 13:16:02 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/23 13:41:39 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << RED "Default_Cat" GREEN " constructor called" RESET << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << GREEN "Constructor \"Cat\" >> " RED << type << GREEN " << called" RESET << std::endl;
}

Cat::Cat(const Cat& cat) : Animal(cat)
{
	std::cout << GREEN "Copy >> " RED << cat._type << GREEN " << called" <<  RESET << std::endl;
}

Cat::~Cat(void)
{
	std::cout << GREEN "Destructor Cat " RED << this->_type << GREEN " called" RESET << std::endl;
}

Cat&	Cat::operator=(const Cat& cat)
{
	this->_type = cat._type;
	return *this;
}

void	Cat::makeSound(void) const 
{
	std::cout << ORANGE "Miawouuu Miawouuu Miawouuu Miawouuu Miawouuu Miawouuu Miawouuu Miawouuu" RESET << std::endl;
}
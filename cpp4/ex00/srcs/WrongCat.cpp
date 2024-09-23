/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 14:08:48 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/23 14:31:41 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("default_WrongCat")
{
	std::cout << RED "Default_WrongCat" GREEN " constructor called" RESET << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << GREEN "Constructor \"WrongCat\" >> " RED << type << GREEN " << called" RESET << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongCat) : WrongAnimal(wrongCat._type)
{
	std::cout << GREEN "Copy >> " RED << wrongCat._type << GREEN " << called" <<  RESET << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << GREEN "Destructor WrongCat " RED << this->_type << GREEN " called" RESET << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& wrongCat)
{
	this->_type = wrongCat._type;
	return *this;
}

void	WrongCat::makeSound(void) const
{
	std::cout << ORANGE "WRONG_MIAOU WRONG_MIAOU WRONG_MIAOU WRONG_MIAOU WRONG_MIAOU WRONG_MIAOU WRONG_MIAOU WRONG_MIAOU WRONG_MIAOU WRONG_MIAOU " RESET << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:06:55 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/14 12:01:24 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << ORANGE "Cure Constructor >> " RED << this->_type << ORANGE " << called" RESET << std::endl;
}

Cure::Cure(const Cure& cure) : AMateria(cure)
{
	std::cout << ORANGE "Copy Cure Constructor >> " RED << this->_type << ORANGE " << called" RESET << std::endl;
}

Cure::~Cure()
{
	std::cout << ORANGE "Cure Destructor >> " RED << this->_type << ORANGE " << called" RESET << std::endl;
}

Cure& Cure::operator=(const Cure& cure)
{
	this->AMateria::operator=(cure);
	return (*this);
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

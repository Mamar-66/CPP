/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 15:41:18 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/13 13:53:41 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("default")
{
	std::cout << ORANGE "AMaterial Constructor >> " <<  RED "defaulte" ORANGE << " << called" RESET << std::endl;
}

AMateria::AMateria(const AMateria& amateria) : _type(amateria._type)
{
	std::cout << ORANGE "AMaterial Copy constructor >> " RED <<this->_type << ORANGE " << called" RESET << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << ORANGE "AMaterial Constructor for >> " RED <<this->_type << ORANGE " << called" RESET << std::endl;
}

AMateria::~AMateria()
{
	std::cout << ORANGE "Destructor >> " RED <<this->_type << ORANGE " << called" RESET << std::endl;
}

AMateria& AMateria::operator=(const AMateria& amateria)
{
	this->_type = amateria._type;
	return *this;
}

std::string const& AMateria::getType() const
{
	return this->_type;
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

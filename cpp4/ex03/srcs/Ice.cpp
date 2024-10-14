/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:06:36 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/14 12:01:21 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << ORANGE "Ice Constructor >> " RED << this->_type << ORANGE " << called" RESET << std::endl;
}

Ice::Ice(const Ice &ice) : AMateria(ice)
{
	std::cout << ORANGE "Copy Ice Constructor >> " RED << this->_type << ORANGE " << called" RESET << std::endl;
}

Ice::~Ice()
{
	std::cout << ORANGE " Destructor Ice >> " RED << this->_type << ORANGE " << called" RESET << std::endl;
}

Ice& Ice::operator=(const Ice& ice)
{
	this->AMateria::operator=(ice);
	return *this;
}

AMateria* Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

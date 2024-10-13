/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:06:36 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/13 18:38:50 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

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

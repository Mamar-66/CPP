/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:40:45 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/24 12:11:25 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data() : _name("i am Data")
{
	std::cout << ORANGE "Data Constructeur called" RESET << std::endl;
}

Data::Data(const Data& other) : _name(other._name)
{
	std::cout << ORANGE "Data Cpy Constructeur called" RESET << std::endl;
}

Data::~Data()
{
	std::cout << ORANGE "Data Destructor called" RESET << std::endl;
}

Data&	Data::operator=(const Data& other)
{
	if (this != &other)
		this->_name = other._name;

	return *this;
}

std::string	Data::getName()
{
	return this->_name;	
}

std::ostream& operator<<(std::ostream& o, Data& other)
{
	o << other.getName();
	return o;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:49:37 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/22 11:05:18 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

/*
					CONSTRUCTOR / DESTRUCTOR 
							NON USABLE
*/

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(const ScalarConverter& other)
{
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
}

/*
---------------------------------------------------------------
*/



void	ScalarConverter::convert(const std::string& literal)
{

}

/*
						EXEPTION
*/

const char* ScalarConverter::InvalidInput::what() const throw()
{
	return (RED "Invalide Input" RESET);
}

const char* ScalarConverter::Impossible::what() const throw()
{
	return (RED "Impossible to convert" RESET);
}

const char* ScalarConverter::NonDisplayable::what() const throw()
{
	return (RED "Non Displayable" RESET);
}

/*
--------------------------------------------------------------------
*/
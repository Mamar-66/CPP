/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:49:37 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/23 20:53:48 by omfelk           ###   ########.fr       */
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
	(void)other;
}

ScalarConverter::~ScalarConverter()
{
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
{
	(void)other;
	return *this;
}

/*
---------------------------------------------------------------
*/


/*
							FUNCTION CONVERT
*/

static void 	Convert_char(std::string literal)
{
	std::cout << "char   : " << literal[0] << std::endl;
	std::cout << "int    : " << static_cast<int>(literal[0]) << std::endl;
	std::cout << "float  : " << std::fixed << std::setprecision(1) << static_cast<float>(literal[0]) << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(1) << static_cast<double>(literal[0]) << std::endl;
}

static void		Convert_int(std::string literal)
{
	int number = atoi(literal.c_str());

	if (number < 0 || number > 127)
		std::cout << "char   : impossible" << std::endl;
	else if (number < 32 || number == 127)
		std::cout << "char   : non displayable" << std::endl;
	else
		std::cout << "char   : " << static_cast<char>(number) << std::endl;
	std::cout << "int    : " << number << std::endl;
	std::cout << "float  : " << std::fixed << std::setprecision(2) << static_cast<float>(number) << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<double>(number) << std::endl;
}

static void		Convert_float(std::string literal)
{
	float number = atof(literal.c_str());

	if (number < 0 || number > 127)
		std::cout << "char   : impossible" << std::endl;
	else if (number < 32 || number == 127)
		std::cout << "char   : non displayable" << std::endl;
	else
		std::cout << "char   : " << static_cast<char>(number) << std::endl;
	std::cout << "int    : " << static_cast<int>(number) << std::endl;
	std::cout << "float  : " << std::fixed << std::setprecision(2) << number << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(2) << static_cast<double>(number) << std::endl;
}

static void		Convert_double(std::string literal)
{
	double number = atof(literal.c_str());

	if (number < 0 || number > 127)
		std::cout << "char   : impossible" << std::endl;
	else if (number < 32 || number == 127)
		std::cout << "char   : non displayable" << std::endl;
	else
		std::cout << "char   : " << static_cast<char>(number) << std::endl;
	std::cout << "int    : " << static_cast<int>(number) << std::endl;
	std::cout << "float  : " << std::fixed << std::setprecision(2) << static_cast<float>(number) << "f" << std::endl;
	std::cout << "double : " << std::fixed << std::setprecision(2) << number << std::endl;
}

static void		negatifInfConvert()
{
	std::cout << "char   : impossible" << std::endl;
	std::cout << "int    : " << INT_MIN << std::endl;
	std::cout << "float  : " << __FLT_MIN__ << std::endl;
	std::cout << "double : " << __DBL_MIN__ << std::endl;
}

static void		positifInfConvert()
{
	std::cout << "char   : impossible" << std::endl;
	std::cout << "int    : " << INT_MAX << std::endl;
	std::cout << "float  : " << __FLT_MAX__ << std::endl;
	std::cout << "double : " << __DBL_MAX__ << std::endl;
}

static void		nanerror()
{
	std::cout << "char   : impossible" << std::endl;
	std::cout << "int    : impossible" << std::endl;
	std::cout << "float  : nanf" << std::endl;
	std::cout << "double : nan" << std::endl;
}

static void		error()
{
	std::cout << RED "ERROR" RESET << std::endl;
	std::cout << "char   : impossible" << std::endl;
	std::cout << "int    : 0" << std::endl;
	std::cout << "float  : 0.00f" << std::endl;
	std::cout << "double : 0" << std::endl;
}

/*
-------------------------------------------------------------------
*/


void	ScalarConverter::convert(std::string literal)
{
	if (std::isprint(literal[0]) && !std::isdigit(literal[0]))
	{
		if (literal.length() == 1)
			Convert_char(literal);
		else if (literal == "-inff" || literal == "-inf")
			negatifInfConvert();
		else if (literal == "+inff" || literal == "+inf")
			positifInfConvert();
		else if (literal == "nanf" || literal == "nan")
			nanerror();
		else
			error();
	}
	else if (literal.find('.') != std::string::npos && literal[literal.length() - 1] == 'f')
	{
		long unsigned int i = 0;

		while ((i < (literal.length() - 1) && (std::isdigit(literal[i]) || literal[i] == '.')))
			i++;

		if (i == literal.length() - 1)
			Convert_float(literal);
		else
			error();
	}
	else if (literal.find('.') != std::string::npos)
	{
		long unsigned int i = 0;

		while ((i < (literal.length()) && (std::isdigit(literal[i]) || literal[i] == '.')))
			i++;

		if (i == literal.length())
			Convert_double(literal);
		else
			error();
	}
	else if(std::isdigit(literal[0]))
	{
		long unsigned int i = 0;

		while (std::isdigit(literal[i]))
			i++;

		if (i == literal.length())
			Convert_int(literal);
		else
			error();
	}
	else
		error();
}

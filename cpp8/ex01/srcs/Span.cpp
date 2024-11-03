/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:02:26 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/03 17:51:53 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Span.hpp"

Span::Span() : _maxNb(0), _storyteller(0)
{
	std::cout << ORANGE "Constructeur >> " RED << "default" << " << called" RESET << std::endl;
}

Span::Span(const unsigned int maxnb) : _maxNb(maxnb), _storyteller(0)
{
	std::cout << ORANGE "Constructeur called" RESET << std::endl;
}

Span::Span(const Span &other) : _maxNb(other._maxNb), _storyteller(other._storyteller)
{
	std::cout << ORANGE "Constructeur >> " RED << "Copy" << " << called" RESET << std::endl;
}

Span::~Span()
{
	std::cout << ORANGE "Destructor called" RESET << std::endl;
}

Span&	Span::operator=(const Span &other)
{
	if (this != &other)
	{
		this->_maxNb = other._maxNb;
		this->_storyteller = other._storyteller;
	}
	return *this;
}

/*----------------------------------------------------------------------*/
/*							FUCTION MEMBER								*/
/*----------------------------------------------------------------------*/

void	Span::addNumber(unsigned int number)
{
	if (this->_storyteller >= this->_maxNb)
		throw Span::ExceptionMaxNb();

	this->_array.push_back(number);
	this->_storyteller++;
}

/*----------------------------------------------------------------------*/
/*							EXEPTION									*/
/*----------------------------------------------------------------------*/

const char * Span::ExceptionMaxNb::what() const throw()
{
	return (RED "error max size nb" RESET);
}

const char * Span::ExceptionNoNb::what() const throw()
{
	return (RED "error no number" RESET);
}

const char * Span::ExceptionOnNb::what() const throw()
{
	return (RED "error one nb" RESET);
}

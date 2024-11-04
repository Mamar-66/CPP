/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:02:26 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/04 13:12:23 by omfelk           ###   ########.fr       */
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

unsigned int Span::shortestSpan()
{
	std::vector<unsigned int> cpy_array(this->_array);

	if (!cpy_array.size())
		throw Span::ExceptionNoNb();
	if (cpy_array.size() == 1)
		throw Span::ExceptionOnNb();
	
	unsigned int min = UINT_MAX;
	std::vector<unsigned int>::iterator	it;
	std::vector<unsigned int>::iterator	ite = cpy_array.end();

	std::sort(cpy_array.begin(), cpy_array.end());

	for (it = cpy_array.begin(); it != ite - 1; it++)
	{
		if ((*(it + 1) - *it) < min)
			min = (*(it + 1) - *it);
	}

	return min;
}

unsigned int Span::longestSpan()
{
	if (!this->_array.size())
		throw Span::ExceptionNoNb();
	if (this->_array.size() == 1)
		throw Span::ExceptionOnNb();

	unsigned int min = *std::min_element(this->_array.begin(), this->_array.end());
	unsigned int max = *std::max_element(this->_array.begin(), this->_array.end());

	return max - min;
}

void	Span::addNb(const std::vector<unsigned int>::iterator& begin, const std::vector<unsigned int>::iterator& end)
{
	unsigned int dist = std::distance(begin, end);
	if (dist + this->_array.size() > this->_maxNb)
		throw Span::ExceptionMaxNb();
	this->_array.insert(_array.end(), begin, end);
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

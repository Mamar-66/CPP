/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:50:52 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/03 13:20:41 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) :
	_fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;
	this->_fixedPoint = nb << _bitNb;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	this->_fixedPoint = (int)roundf(nb * (1 << _bitNb));
}

Fixed::Fixed(const Fixed &fixed) :
	_fixedPoint(fixed._fixedPoint)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = raw;
}

Fixed& Fixed::operator=(const Fixed& asignement)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = asignement._fixedPoint;
	return *this;
}

float		Fixed::toFloat(void) const
{
	return (float)(this->_fixedPoint) / (1 << _bitNb);
}

int			Fixed::toInt(void) const
{
	return this->_fixedPoint >> _bitNb;
}

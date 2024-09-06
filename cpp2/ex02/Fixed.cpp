/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 15:50:52 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/06 10:21:10 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/***********************************
	CONSTRUCTOR / DESTRUCTOR
************************************/

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

/***********************************

************************************/
/***********************************
			FUNCTION MUMBER
************************************/

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

float		Fixed::toFloat(void) const
{
	return (float)(this->_fixedPoint) / (1 << _bitNb);
}

int			Fixed::toInt(void) const
{
	return this->_fixedPoint >> _bitNb;
}

/***********************************

************************************/
/***********************************
		SURCHARGE OPERATOR
************************************/

// 				COMPARAISON

bool 		Fixed::operator>(const Fixed fixed)
{
	return this->_fixedPoint > fixed._fixedPoint;
}

bool 		Fixed::operator<(const Fixed fixed)
{
	return this->_fixedPoint < fixed._fixedPoint;
}

bool 		Fixed::operator>=(const Fixed fixed)
{
	return this->_fixedPoint >= fixed._fixedPoint;
}

bool 		Fixed::operator<=(const Fixed fixed)
{
	return this->_fixedPoint <= fixed._fixedPoint;
}

bool 		Fixed::operator==(const Fixed fixed)
{
	return this->_fixedPoint == fixed._fixedPoint;
}

bool 		Fixed::operator!=(const Fixed fixed)
{
	return this->_fixedPoint != fixed._fixedPoint;
}

/*************************************************/
//				ARITHMETHIQUES

Fixed		Fixed::operator+(const Fixed& fixed)
{
	Fixed result;

	result._fixedPoint = this->_fixedPoint + fixed._fixedPoint;
	//result.setRawBits(this->_fixedPoint + fixed._fixedPoint);

	return result;
}

Fixed		Fixed::operator-(const Fixed& fixed)
{
	Fixed result;

	result._fixedPoint = this->_fixedPoint - fixed._fixedPoint;
	//result.setRawBits(this->_fixedPoint - fixed._fixedPoint);

	return result;
}

Fixed		Fixed::operator*(const Fixed& fixed)
{
	Fixed result;

	result._fixedPoint = this->_fixedPoint * fixed._fixedPoint >> _bitNb;
	//result.setRawBits(this->_fixedPoint * fixed._fixedPoint);

	return result;
}

Fixed		Fixed::operator/(const Fixed& fixed)
{
	Fixed result;

	result._fixedPoint = this->_fixedPoint / fixed._fixedPoint << _bitNb;
	//result.setRawBits(this->_fixedPoint / fixed._fixedPoint);

	return result;
}

/****************************************************/
// 				incrementation

Fixed&	Fixed::operator++(void)
{
	this->_fixedPoint++;
	
	return *this;
}

Fixed&	Fixed::operator--(void)
{
	this->_fixedPoint--;

	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed result = *this;

	++*this;

	return result;
}

Fixed	Fixed::operator--(int)
{
	Fixed result = *this;

	--*this;

	return result;
}

Fixed& Fixed::operator=(const Fixed& asignement)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPoint = asignement._fixedPoint;
	return *this;
}

/***********************************
 *				MIN / MAX
************************************/

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	if (a < b)
		return a;
	return b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	if (a._fixedPoint < b._fixedPoint)
		return a;
	return b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	if (a > b)
		return a;
	return b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	if (a._fixedPoint > b._fixedPoint)
		return a;
	return b;
}
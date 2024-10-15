/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:48:11 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/15 12:22:06 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(150)
{
	std::cout << ORANGE "Constructeur >> " RED << _name << " << called" RESET << std::endl;
}

// about finish exeption
Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name)
{
	std::cout << ORANGE "Constructeur >> " RED << _name << " << called" RESET << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& bureaucrat ) : _name(bureaucrat._name), _grade(bureaucrat._grade)
{
	std::cout << ORANGE "Copy Constructeur >> " RED << _name << " << called" RESET << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << ORANGE "Destructor >> " RED << _name << " << called" RESET << std::endl;
}

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& bureaucrat )
{
	this->_grade = bureaucrat._grade;
	std::cout << RED "||| The name is a constant the only modified value is the grade |||" RESET << std::endl;

	return *this;
}

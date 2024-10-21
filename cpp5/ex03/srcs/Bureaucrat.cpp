/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:48:11 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/18 14:58:48 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


/*
					CONSTRUCTOR / DESTRUCTOR
*/

Bureaucrat::Bureaucrat() : _name( "default_Bureaucrat" ), _grade( 150 )
{
	std::cout << ORANGE "Constructeur Bureaucrate >> " RED << _name << " << called" RESET << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name( name )
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;

	std::cout << ORANGE "Constructeur Bureaucrate >> " RED << _name << " << called" RESET << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat& bureaucrat ) : _name(bureaucrat._name), _grade(bureaucrat._grade)
{
	std::cout << ORANGE "Copy Constructeur Bureaucrate >> " RED << _name << " << called" RESET << std::endl;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << ORANGE "Destructor Bureaucrate >> " RED << _name << " << called" RESET << std::endl;
}

/*
----------------------------------------------------------------------
*/

Bureaucrat&	Bureaucrat::operator=( const Bureaucrat& bureaucrat )
{
	this->_grade = bureaucrat._grade;
	std::cout << RED "||| The name is a constant the only modified value is the grade |||" RESET << std::endl;

	return *this;
}

/*
						GETTTERS / SETTER
*/

const std::string	Bureaucrat::getName() const
{
	return this->_name;
}

int					Bureaucrat::getGrade() const
{
	return this->_grade;
}

/*
----------------------------------------------------------------------
*/


/*
						fonction menbre
*/

void	Bureaucrat::incrementGrade( int value )
{
	if ( (this->_grade - value) < 1 )
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade -= value;
}

void	Bureaucrat::decrementGrade( int value )
{
	if ( this->_grade + value > 150 )
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade += value;
}

void	Bureaucrat::signForm(const AForm& form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signed " << form << std::endl;
	}
	catch(const AForm::GradeTooLow& e)
	{
		std::cerr << *this << "Couldn't sign " << form << " because\n" << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const & form)
{
	try
	{
		form.execute_action(*this);
		std::cout << *this << " executed " << form << std::endl;
	}
	catch(const AForm::AFromNotSigned& e)
	{
		std::cerr << *this << " cannot execute " << form << " because "  << e.what() << '\n';
	}
	catch(const AForm::GradeTooLow& e)
	{
		std::cerr << *this << " cannot execute " << form << " because "  << e.what() << '\n';
	}
	
}

/*
-------------------------------------------------------------------------
*/

/*
						CLASS IMBRIQUEES
*/
const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return (BLUE "Grade too high" RESET);
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return (BLUE "Grade too low" RESET);
}

/*
----------------------------------------------------------------------
*/

std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat)
{
	o << bureaucrat.getName() << " bureaucrat grade " << bureaucrat.getGrade() << std::endl;
	return o;
}

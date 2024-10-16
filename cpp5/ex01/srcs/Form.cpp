/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:28:20 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/16 17:28:35 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
							CONSTRUCTOR / DESTRUCTOR
*/

From::From() : 
	_name( "default_From" ), _isSigned( false),
	_gradeBeSigned(1), _gradeBeExecute(1)
{
	std::cout << ORANGE "Constructeur >> " RED << _name << " << called" RESET << std::endl;
}

From::From(const std::string& name, const int& grad_be_signed, const int& grad_be_execute) :
	_name( name ), _isSigned( false ),
	_gradeBeSigned( _gradeBeSigned ), _gradeBeExecute( _gradeBeExecute )

{
	if ( grad_be_signed < 1 || grad_be_execute < 1)
		From::GradeTooHighException();
	else if ( grad_be_signed > 150 || grad_be_execute > 150 )
		From::GradeTooLowException();

	std::cout << ORANGE "Constructeur >> " RED << _name << " << called" RESET << std::endl;
}

From::From(const From& from) : 
	_name( from._name ), _isSigned( from._isSigned ),
	_gradeBeSigned( from._gradeBeSigned ), _gradeBeExecute( from._gradeBeExecute )
{
	std::cout << ORANGE "Copy Constructeur >> " RED << _name << " << called" RESET << std::endl;
}

From::~From()
{
	std::cout << ORANGE "Destructor >> " RED << _name << " << called" RESET << std::endl;
}

/*
--------------------------------------------------------------------------
*/

From&	From::operator=(const From& from)
{
	(void)from;
	
	std::cout << RED "||| No changes will be made |||" RESET << std::endl;

	return *this;
}

const char*	From::GradeTooHighException::what() const throw()
{
	return (BLUE "Grade_From too high" RESET);
}

const char*	From::GradeTooLowException::what() const throw()
{
	return (BLUE "Grade_From too Low" RESET);
}
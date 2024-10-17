/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:28:20 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/17 22:36:18 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

/*
							CONSTRUCTOR / DESTRUCTOR
*/

Form::Form() : 
	_name( "default_form" ), _isSigned( false),
	_gradeBeSigned(1), _gradeBeExecute(1)
{
	std::cout << ORANGE "Constructeur >> " RED << _name << " << called" RESET << std::endl;
}

Form::Form(const std::string& name, const int& grad_be_signed, const int& grad_be_execute) :
	_name( name ), _isSigned( false ),
	_gradeBeSigned( grad_be_signed ), _gradeBeExecute( grad_be_execute )

{
	if ( grad_be_signed < 1 || grad_be_execute < 1)
		throw Form::GradeTooHighException();
	else if ( grad_be_signed > 150 || grad_be_execute > 150 )
		throw Form::GradeTooLowException();

	std::cout << ORANGE "Constructeur >> " RED << _name << " << called" RESET << std::endl;
}

Form::Form(const Form& form) : 
	_name( form._name ), _isSigned( form._isSigned ),
	_gradeBeSigned( form._gradeBeSigned ), _gradeBeExecute( form._gradeBeExecute )
{
	std::cout << ORANGE "Copy Constructeur >> " RED << _name << " << called" RESET << std::endl;
}

Form::~Form()
{
	std::cout << ORANGE "Destructor >> " RED << _name << " << called" RESET << std::endl;
}

/*
--------------------------------------------------------------------------
*/

Form&	Form::operator=(const Form& form)
{
	(void)form;
	
	std::cout << RED "||| No changes will be made |||" RESET << std::endl;

	return *this;
}

/*
						Getter
*/

const std::string	Form::getName() const
{
	return this->_name;
}

bool				Form::getIsSigned() const
{
	return this->_isSigned;
}

int			Form::getGradeBeExecute() const
{
	return this->_gradeBeExecute;
}

int			Form::getGradeBeSigned() const
{
	return this->_gradeBeSigned;
}

/* 
						METHODE
*/

void	Form::beSigned(const Bureaucrat& Bureaucrat) const
{
	if (!this->_isSigned)
	{
		if (Bureaucrat.getGrade() > this->getGradeBeSigned())
			throw Form::GradeTooLow();
		else
			this->_isSigned = true;
	}
	else
		throw Form::AlreadySigned();
}

/*
						CLASS IMBRIQUEES
*/

const char*	Form::GradeTooHighException::what() const throw()
{
	return (RED "Grade_Form too high" RESET);
}

const char*	Form::GradeTooLowException::what() const throw()
{
	return (RED "Grade_form too Low" RESET);
}

const char*	Form::GradeTooLow::what() const throw()
{
	return (RED "Grade_Bureaucrat os too low" RESET);
}

const char*	Form::AlreadySigned::what() const throw()
{
	return (RED "Form already signed" RESET);
}

std::ostream&	operator<<(std::ostream& o, const Form& form)
{
	o << std::endl << std::string(30, '-') << std::endl;
	o << BLUE "          Form" << std::endl;
	o << "     Name     : " << form.getName() << std::endl;
	o << "status signed : " << form.getIsSigned() << std::endl;
	o << "Grad Execute  : " << form.getGradeBeExecute() << std::endl;
	o << "Grade Signed  : " RESET << form.getGradeBeSigned() << std::endl;
	o << std::string(30, '-') << std::endl;

	return o;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:28:20 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/18 09:14:24 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

/*
							CONSTRUCTOR / DESTRUCTOR
*/

AForm::AForm() : 
	_name( "default_AForm" ), _target("default_target"),_isSigned( false),
	_gradeBeSigned(1), _gradeBeExecute(1)
{
	std::cout << ORANGE "Constructeur Form >> " RED << _name << " << called" RESET << std::endl;
}

AForm::AForm(const std::string& name, const int& grad_be_signed, const int& grad_be_execute) :
	_name( name ), _isSigned( false ),
	_gradeBeSigned( grad_be_signed ), _gradeBeExecute( grad_be_execute )

{
	if ( grad_be_signed < 1 || grad_be_execute < 1)
		throw AForm::GradeTooHighException();
	else if ( grad_be_signed > 150 || grad_be_execute > 150 )
		throw AForm::GradeTooLowException();

	std::cout << ORANGE "Constructeur Form >> " RED << _name << " << called" RESET << std::endl;
}


AForm::AForm(const std::string &name, const std::string& target ,const int &grad_be_signed ,const int &grad_be_execute) :
	_name( name ), _target(target), _isSigned( false ),
	_gradeBeSigned( grad_be_signed ), _gradeBeExecute( grad_be_execute )

{
	if ( grad_be_signed < 1 || grad_be_execute < 1)
		throw AForm::GradeTooHighException();
	else if ( grad_be_signed > 150 || grad_be_execute > 150 )
		throw AForm::GradeTooLowException();

	std::cout << ORANGE "Constructeur Form >> " RED << _name << " << called" RESET << std::endl;
}

AForm::AForm(const AForm& form) : 
	_name( form._name ), _isSigned( form._isSigned ),
	_gradeBeSigned( form._gradeBeSigned ), _gradeBeExecute( form._gradeBeExecute )
{
	std::cout << ORANGE "Copy Constructeur Form >> " RED << _name << " << called" RESET << std::endl;
}

AForm::~AForm()
{
	std::cout << ORANGE "Destructor Form >> " RED << _name << " << called" RESET << std::endl;
}

/*
--------------------------------------------------------------------------
*/

AForm&	AForm::operator=(const AForm& form)
{
	(void)form;
	
	std::cout << RED "||| No changes will be made |||" RESET << std::endl;

	return *this;
}

/*
						Getter
*/

const std::string	AForm::getName() const
{
	return this->_name;
}

const std::string	AForm::getTarget() const
{
	return this->_target;
}

bool				AForm::getIsSigned() const
{
	return this->_isSigned;
}

int			AForm::getGradeBeExecute() const
{
	return this->_gradeBeExecute;
}

int			AForm::getGradeBeSigned() const
{
	return this->_gradeBeSigned;
}

/* 
						METHODE
*/

void	AForm::beSigned(const Bureaucrat& Bureaucrat) const
{
	if (!this->_isSigned)
	{
		if (Bureaucrat.getGrade() > this->getGradeBeSigned())
			throw AForm::GradeTooLow();
		else
			this->_isSigned = true;
	}
	else
		throw AForm::AlreadySigned();
}

void	AForm::execute(Bureaucrat const & executor) const
{
	if (!this->_isSigned)
		throw AForm::AFromNotSigned();
	if (executor.getGrade() > this->getGradeBeExecute())
		throw AForm::GradeTooLow();
}

/*
						CLASS IMBRIQUEES
*/

const char*	AForm::GradeTooHighException::what() const throw()
{
	return (RED "Grade_AForm too high" RESET);
}

const char*	AForm::GradeTooLowException::what() const throw()
{
	return (RED "Grade_AForm too Low" RESET);
}

const char*	AForm::GradeTooLow::what() const throw()
{
	return (RED "Grade_Bureaucrat is too low" RESET);
}

const char*	AForm::AlreadySigned::what() const throw()
{
	return (RED "Form already signed" RESET);
}

const char* AForm::AFromNotSigned::what() const throw()
{
	return (RED "Form not signed" RESET);
}

std::ostream&	operator<<(std::ostream& o, const AForm& form)
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

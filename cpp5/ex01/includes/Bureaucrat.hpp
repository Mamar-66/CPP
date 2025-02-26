/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:45:12 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/17 22:07:57 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
	#define BUREAUCRAT_HPP

	#include <iostream>
	#include <string>
	#include "Form.hpp"

class Form;

	#define RED "\033[31m"
	#define ORANGE "\033[38;5;208m"
	#define GREEN "\033[32m"
	#define BLUE "\033[34m"
	#define RESET "\033[0m"
	#define BOLD "\033[1m"
	#define UNDERLINE "\033[4m"

	class Bureaucrat
	{
	private:
		std::string const _name;
		int _grade;

	public:
		Bureaucrat();
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &bureaucrat);
		~Bureaucrat();

		Bureaucrat &operator=(const Bureaucrat &bureaucrat);

		const std::string getName() const;
		int getGrade() const;

		void incrementGrade(int value = 1);
		void decrementGrade(int value = 1);
		void signForm(const Form &form) const;

		class GradeTooHighException : public std::exception
		{
		public:
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
		public:
			const char *what() const throw();
		};
		};

	std::ostream& operator<<(std::ostream& o, const Bureaucrat& bureaucrat);

#endif

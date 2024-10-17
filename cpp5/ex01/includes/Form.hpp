/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:27:38 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/17 18:06:01 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
	#define FORM_HPP

	#include <string>
	#include <iostream>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class	Form
	{
		private :
			const std::string	_name;
			bool				_isSigned;
			const int			_gradeBeSigned;
			const int			_gradeBeExecute;

		public :
			Form();
			Form(const std::string& name, const int& grad_be_signed, const int& grad_be_execute);
			Form(const Form& form);
			~Form();

			Form &operator=(const Form& form);

			const std::string		getName() const;
			bool					getIsSigned() const;
			const int				getGradeBeSigned() const;
			const int				getGradeBeExecute() const;

			class GradeTooHighException : std::exception
			{
				public :
					const char* what() const throw();
			};

			class	GradeTooLowException : std::exception
			{
				public :
					const char* what() const throw();
			};

	};
	
	std::ostream&	operator<<(std::ostream& o, const Form& form);

#endif
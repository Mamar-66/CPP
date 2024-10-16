/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:27:38 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/16 17:07:43 by omfelk           ###   ########.fr       */
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

	class	From
	{
		private :
			const std::string	_name;
			bool				_isSigned;
			const int			_gradeBeSigned;
			const int			_gradeBeExecute;

		public :
			From();
			From(const std::string& name, const int& grad_be_signed, const int& grad_be_execute);
			From(const From& from);
			~From();

			From &operator=(const From& from);

			class	GradeTooHighException : std::exception
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

#endif
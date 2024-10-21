/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 16:27:38 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/21 09:53:49 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
	#define FORM_HPP

	#include <string>
	#include <iostream>
	#include "Bureaucrat.hpp"

	class Bureaucrat;

	#define RED "\033[31m"
	#define ORANGE "\033[38;5;208m"
	#define GREEN "\033[32m"
	#define BLUE "\033[34m"
	#define RESET "\033[0m"
	#define BOLD "\033[1m"
	#define UNDERLINE "\033[4m"

	class AForm
	{
		private:
			const std::string	_name;
			const std::string	_target;
			mutable bool		_isSigned;
			const int			_gradeBeSigned;
			const int			_gradeBeExecute;

		public:
			AForm();
			AForm(const std::string &name ,const int &grad_be_signed ,const int &grad_be_execute);
			AForm(const std::string &name, const std::string& target ,const int &grad_be_signed ,const int &grad_be_execute);
			AForm(const AForm &form);
			virtual ~AForm();

			AForm &operator=(const AForm &form);

			const std::string		getName() const;
			const std::string		getTarget() const;
			bool					getIsSigned() const;
			int						getGradeBeSigned() const;
			int						getGradeBeExecute() const;

			void					beSigned(const Bureaucrat &bureaucrat) const;
			void					execute(Bureaucrat const & executor) const;
			virtual void			execute_action(const Bureaucrat& other) const = 0;

			class GradeTooHighException : std::exception
			{
				public:
					const char *what() const throw();
			};

			class GradeTooLowException : std::exception
			{
				public:
					const char *what() const throw();
			};

			class GradeTooLow : std::exception
			{
				public:
					const char *what() const throw();
			};

			class AlreadySigned : std::exception
			{
				public:
					const char *what() const throw();
			};

			class AFromNotSigned : std::exception
			{
				public :
					const char* what() const throw();
			};
	};

	std::ostream&	operator<<(std::ostream& o, const AForm& form);

#endif

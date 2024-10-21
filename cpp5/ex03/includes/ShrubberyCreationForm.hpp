/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:22:10 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/18 11:45:17 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
	#define SHRUBBERYCREATIONFORM_HPP

	#include "AForm.hpp"
	#include <fstream>
	#include <cstring>

	class ShrubberyCreationForm : public AForm
	{
		public :
			ShrubberyCreationForm();
			ShrubberyCreationForm(const std::string target);
			ShrubberyCreationForm(const ShrubberyCreationForm& other);
			~ShrubberyCreationForm();

			ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);

			void			execute_action(const Bureaucrat& other) const;
	};

#endif
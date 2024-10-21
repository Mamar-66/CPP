/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 08:52:43 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/21 09:22:34 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
	#define INTERN_HPP

	#include "AForm.hpp"

	class	Intern
	{
		public :
			Intern();
			~Intern();

			AForm*	makeForm(const std::string& name_form, const std::string& target) const;

			class InvalidForm : public std::exception
			{
				public :
					const char * what() const throw();
			};
	};

#endif
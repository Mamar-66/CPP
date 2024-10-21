/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:38:24 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/19 17:18:34 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP	
	#define PRESIDENTIALPARDONFORM_HPP	

	#include "AForm.hpp"

	class PresidentialPardonForm : public AForm
	{
		public :
			PresidentialPardonForm();
			PresidentialPardonForm(const std::string target);
			PresidentialPardonForm(const PresidentialPardonForm& other);
			~PresidentialPardonForm();

			PresidentialPardonForm& operator=(const PresidentialPardonForm& other);

			void			execute_action(const Bureaucrat& other) const;
	};

#endif
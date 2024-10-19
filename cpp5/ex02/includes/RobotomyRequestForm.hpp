/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 09:35:46 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/19 16:31:48 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP	
	#define ROBOTOMYREQUESTFORM_HPP

	#include "AForm.hpp"

	class	RobotomyRequestForm : public AForm
	{
		public :
			RobotomyRequestForm();
			RobotomyRequestForm(const std::string target);
			RobotomyRequestForm(const RobotomyRequestForm& other);
			~RobotomyRequestForm();

			RobotomyRequestForm& operator=(const RobotomyRequestForm& other);

			void			execute_action(const Bureaucrat& other) const;
	};

#endif
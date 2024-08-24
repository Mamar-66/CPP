/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 14:16:48 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/04 16:54:49 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _contact_hpp
	#define _contact_hpp

	#include <string>

	class Contact
	{
		public:
			Contact() {};

			// function set 
			void	setFirstName();
			void	setLastName();
			void	setNickName();
			void	setPhoneNumber();
			void	setDarkestSecret();

			// function get cout
			std::string	getFirstName() const;
			std::string	getLastName() const;
			std::string	getNickName() const;
			std::string	getPhoneNumber() const;
			std::string	getDarkestSecret() const;

		private:
			std::string	_firstName;
			std::string	_lastName;
			std::string	_nickName;
			std::string	_phoneNumber;
			std::string	_darkestSecret;
	};

#endif
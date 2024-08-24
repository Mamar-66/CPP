/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:08:31 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/04 16:54:19 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
	#define	PHONEBOOK_HPP

	#include "contact.hpp"
	#include <iostream>
	#include <string>
	#include <limits>
	#include <locale>
	#include <cstdlib>
	#include <cctype>
	#include <iomanip>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class PhoneBook
	{
		public:
			PhoneBook(): m_index(-1), m_nb_register(0) {};

			void	setContact(Contact contact);

			Contact	getContact(int index);
			int 	getNbRegister();

		private:
			Contact m_contacts[8];
			int 	m_index;
			int		m_nb_register;
	};

	void enonce();

	std::string	recup_cmd();

	void 	add(PhoneBook *phonebook);
	void	search(PhoneBook *PhoneBook);


#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:52:14 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/02 12:15:02 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/PhoneBook.hpp"

void	add(PhoneBook *phonebook)
{
	Contact contact;

	contact.setFirstName();
	contact.setLastName();
	contact.setNickName();
	contact.setPhoneNumber();
	contact.setDarkestSecret();

	phonebook->setContact(contact);

	std::cout << GREEN "✅ contact register ✅" RESET << std::endl;
}

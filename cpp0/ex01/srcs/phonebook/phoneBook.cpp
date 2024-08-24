/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 17:49:01 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/04 16:54:27 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/PhoneBook.hpp"

void	PhoneBook::setContact(Contact contact)
{
	if (m_index < 7)
		m_index++;
	else
		m_index = 0;
	if (m_nb_register < 8)
		m_nb_register++;
	m_contacts[m_index] = contact;
}

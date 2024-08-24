/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:52:54 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/04 12:25:44 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

int 	PhoneBook::getNbRegister()
{
	return m_nb_register;
}

Contact	PhoneBook::getContact(int index)
{
	return m_contacts[index];
}

std::string	trunque(std::string str)
{
	if (str.size() > 10)
		return (str.substr(0, 7) + "...");
	return (str);
}

static	void	affiche()
{
	std::cout << "┌──────────┬──────────┬──────────┬──────────┐" << std::endl;
	std::cout << "│" << std::setw(10) << std::right << "index";
	std::cout << "│" << std::setw(10) << std::right << "first name";
	std::cout << "│" << std::setw(10) << std::right << "last name";
	std::cout << "│" << std::setw(10) << std::right << "nickname" << "|" << std::endl;
}

static	void	affiche_list(PhoneBook *PhoneBook)
{
	Contact contact;

	for (int i = 0; i < PhoneBook->getNbRegister(); i++)
	{
		contact = PhoneBook->getContact(i);
		std::cout << "├──────────┼──────────┼──────────┼──────────┤" << std::endl;
		std::cout << "│" << std::setw(10) << std::right << i;
		std::cout << "│" << std::setw(10) << std::right << trunque(contact.getFirstName());
		std::cout << "│" << std::setw(10) << std::right << trunque(contact.getLastName());
		std::cout << "│" << std::setw(10) << std::right << trunque(contact.getNickName()) << "|" << std::endl;
		;
		
	}
	std::cout << "└──────────┴──────────┴──────────┴──────────┘" << std::endl;
}

static	void	affiche_contact(PhoneBook *PhoneBook)
{
	std::string str;
	Contact 	contact;
	int			num;

	while (true)
	{
		std::cout << "enter the index of the contact to display : ";
		std::getline(std::cin, str);
		//std::cin >> str;
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		num = std::atoi(str.c_str());
		if (str.size() > 1 || !std::isdigit(str[0]) || num >= PhoneBook->getNbRegister())
			std::cout << RED "error index" RESET << std::endl;
		else
			break;
	}
	contact = PhoneBook->getContact(num);
	std::cout << "First Name     : " << contact.getFirstName() << std::endl;
	std::cout << "Last Name      : " << contact.getLastName() << std::endl;
	std::cout << "Nick Name      : " << contact.getNickName() << std::endl;
	std::cout << "Phone Number   : " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret : " << contact.getDarkestSecret() << std::endl;
}

void	search(PhoneBook *PhoneBook)
{
	affiche();
	affiche_list(PhoneBook);
	if (PhoneBook->getNbRegister() > 0)
		affiche_contact(PhoneBook);
}

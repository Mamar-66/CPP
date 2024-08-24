/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 18:16:39 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/04 16:54:43 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/PhoneBook.hpp"

static	bool	verif_arg(std::string str)
{
	if (str.size() == 0)
	{
		std::cout << RED "error the field cannot be empty" RESET << std::endl;
		return false;
	}
	return true;
}

static	bool	verif_number(const std::string& str)
{
	for (int i = 0; str[i]; i++)
	{
		if (!std::isdigit(str[i]))
		{
			std::cout << RED "error is not un number" RESET << std::endl;
			return false;
		}
	}
	if (str.size() != 10)
	{
		std::cout << RED "error a phone number have 10 number" RESET << std::endl;
		return false;
	}
	return true;
}

void	Contact::setFirstName()
{
	std::string str;

	while (true)
	{
		std::cout << GREEN "First name : " RESET;
		std::getline(std::cin, str);
		//std::cin >> str;
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (verif_arg(str))
			break;
	}
	this->_firstName = str;
}

void	Contact::setLastName()
{
		std::string str;

	while (true)
	{
		std::cout << GREEN "Last name : " RESET;
		std::getline(std::cin, str);
		//std::cin >> str;
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (verif_arg(str))
			break;
	}
	this->_lastName = str;
}

void	Contact::setNickName()
{
	std::string str;

	while (true)
	{
		std::cout << GREEN "Nick name : " RESET;
		std::getline(std::cin, str);
		//std::cin >> str;
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (verif_arg(str))
			break;
	}
	this->_nickName = str;
}

void	Contact::setPhoneNumber()
{
	std::string str;

	while (true)
	{
		std::cout << GREEN "Phone number : " RESET;
		std::getline(std::cin, str);
		//std::cin >> str;
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (verif_arg(str) && verif_number(str))
			break;
	}
	this->_phoneNumber = str;
}

void	Contact::setDarkestSecret()
{
	std::string str;

	while (true)
	{
		std::cout << GREEN "Darckest secret : " RESET;
		std::getline(std::cin, str);
		//std::cin >> str;
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (verif_arg(str))
			break;
	}
	this->_darkestSecret = str;
}

std::string	Contact::getFirstName() const
{
	return this->_firstName;
}

std::string	Contact::getLastName() const
{
	return this->_lastName;
}

std::string	Contact::getNickName() const
{
	return this->_nickName;
}

std::string	Contact::getPhoneNumber() const
{
	return this->_phoneNumber;
}

std::string	Contact::getDarkestSecret() const
{
	return this->_darkestSecret;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 14:08:18 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/03 23:52:56 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

void enonce()
{
	std::cout << RED"	🚨 order available 🚨\n" RESET
	GREEN
				"📱 ADD : enregistrer un nouveau contact\n"
				"🔍 SEARCH : affiche le contact demandé\n"
				"❌ EXIT: exit le programe"
	RESET 			
				<< std::endl;
}

int	main()
{
	PhoneBook PhoneBook;
	std::string	cmd;

	enonce();
	while (true)
	{
		cmd = recup_cmd();
		if (cmd.compare("ADD") == 0 || cmd.compare("add") == 0)
			add(&PhoneBook);
		else if (cmd.compare("SEARCH") == 0 || cmd.compare("search") == 0)
			search(&PhoneBook);
		else if (cmd.compare("EXIT") == 0 || cmd.compare("exit") == 0)
			break;
	}
	return (1);
}

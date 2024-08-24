/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   recup_commande.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:26:46 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/04 12:24:52 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PhoneBook.hpp"

static	bool	scan_cmd(const std::string& cmd){
	if (cmd.compare("EXIT") == 0 || cmd.compare("exit") == 0)
		return (true);
	else if (cmd.compare("ADD") == 0 || cmd.compare("SEARCH") == 0
			|| cmd.compare("add") == 0 || cmd.compare("search") == 0)
		return (true);
	return (false);
}

std::string	recup_cmd(){
	std::string	cmd;

	while (true)
	{
		std::cout << "type your command : ";
		//std::cin >> cmd;
		//std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		 std::getline(std::cin, cmd);
		if (scan_cmd(cmd))
			break ;
		std::cout <<BLUE 	"🚫🚫🚫🚫 " << cmd << RESET
					ORANGE	" command not recognized call back "
							"🚫🚫🚫🚫" 
				RESET<< std::endl;
		enonce();
	}
	return (cmd);
}

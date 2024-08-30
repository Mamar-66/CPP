/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/30 16:04:26 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/30 18:18:22 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"


void	error(void)
{
	std::cout << RED "ERROR AGM I NEED 1 ARG" RESET << std::endl;
	std::cout << GREEN "DEBUG" RESET << std::endl;
	std::cout << GREEN "INFO" RESET << std::endl;
	std::cout << GREEN "WARNING" RESET << std::endl;
	std::cout << GREEN "ERROR" RESET << std::endl;	
}

int	val_level_int(char *level)
{
	int i = -1;

	std::string str_level[4] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};

	for (int j = 0; j < 4; j++)
	{
		i++;
		if (str_level[j] == level)
			return i;
	}
	i = -1;
	return i;
}

int	main(int argc, char **argv)
{
	Harl harl;

	if (argc == 2)
	{
		int level_int = val_level_int(argv[1]);
		switch (level_int)
		{
			case 0:
					harl.complain("0");
					// fall through
			case 1:
					harl.complain("1");
					// fall through
			case 2:
					harl.complain("2");
					// fall through
			case 3:
					harl.complain("3");
					break;
			default:
				std::cout << RED "[ Probably complaining about insignificant problems ]" RESET << std::endl;
				break;
		}
	}
	else
		error();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 12:32:00 by omfelk            #+#    #+#             */
/*   Updated: 2024/07/29 15:03:00 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	wait_space(char *str)
{
	int	i;

	i = 0;
	for (; str[i] == ' '; i++)
	{
		if (str[i] != ' ')
			break ;
	}
	return (i);
}

bool	wait_space_end(char *str, int i)
{
	while (str[i])
	{
		if (str[i] != ' ')
			return (true);
		i++;
	}
	return (false);
}

void	print_string_louper(char *str)
{
	int	i;

	i = wait_space(str);
	for (; str[i]; i++)
	{
		if (str[i] == ' ')
			if (!wait_space_end(str, i))
				break;
		std::cout << static_cast<char>(std::toupper(str[i])) ;
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		for (int i = 1; i < argc; i++){
			print_string_louper(argv[i]);
			std::cout << " " ;
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	return (1);
}

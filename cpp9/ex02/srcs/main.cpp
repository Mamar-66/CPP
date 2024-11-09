/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 11:46:50 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/09 11:21:57 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/PmergeMe.hpp"

bool	is_digit_str(char *argm)
{
	for (int i = 0; argm[i]; i++)
	{
		if (!std::isdigit(argm[i]))
			return false;
	}
	return true;
}

void	gest_input(int argc, char **argv)
{
	if (argc < 3)
		throw std::runtime_error(RED "error argm ex : " GREEN "./PmergeMe [nb end nb ....]" RESET);

	for (int i = 1; argv[i]; i++)
	{
		if (!is_digit_str(argv[i]))
			throw std::runtime_error(RED "error caracter no autorized or nb negatif" RESET);
	}

	std::vector<unsigned int>	tab_vec;
	std::deque<unsigned int>	tab_deque;

	for(int i = 1; argv[i]; i++)
	{
		tab_vec.push_back(atoi(argv[i]));
		tab_deque.push_back(atoi(argv[i]));
	}

	affich(tab_vec, "Before:");
	std::cout << std::endl;
	with_vec(tab_vec);
	with_deque(tab_deque);
}

int	main(int argc, char **argv)
{
	try
	{
		gest_input(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 1;
}

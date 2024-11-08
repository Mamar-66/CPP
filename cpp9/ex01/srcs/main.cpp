/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 08:47:45 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/08 10:01:03 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/RPN.hpp"

void	verif_input(int argc, char **argv)
{
	if (argc != 2)
		throw std::runtime_error(RED "error argm  " GREEN "./RPN '[argm]'" RESET);
	
	try
	{
		algo(argv);
	}
	catch(const std::exception& e)
	{
		throw;
	}
}

int main(int argc, char **argv)
{
	try
	{
		verif_input(argc, argv);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	return 0;
}

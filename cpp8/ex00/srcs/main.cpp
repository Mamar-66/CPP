/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:24:43 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/31 11:30:43 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/easyfind.hpp"

int main(int argc, char **argv)
{
	if (argc == 2 && atoi(argv[1]))
	{
		std::list<int> lst;

		lst.push_back(10);
		lst.push_back(20);
		lst.push_back(30);
		lst.push_back(42);
		lst.push_back(50);
		lst.push_back(60);

		try
		{
			std::cout << easyfind(lst, atoi(argv[1])) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	else
		std::cerr << "error argument" << std::endl;

	return 0;
}
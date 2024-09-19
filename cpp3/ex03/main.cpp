/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:16:24 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/19 12:24:05 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << std::endl << std::string(70, '-') << std::endl << std::endl;
	{
		DiamondTrap inherit(GREEN "inherit" RESET);

		std::cout << RED "\nTEST ENERGY\n" RESET << std::endl;
		for (int i = 0; i <= 50; i++)
			inherit.attack("momo");
		inherit.beRepaired(2);
		std::cout << "\n";
	}

	std::cout << std::endl << std::string(70, '-') << std::endl << std::endl;

	{
		DiamondTrap inherit(GREEN "inherit" RESET);

		std::cout << RED "\nTEST TAKE DAMAGE\n" RESET << std::endl;

		for (int i = 0; i < 4; i++)
			inherit.takeDamage(20);
		for (int i = 0; i < 51; i++)
			inherit.beRepaired(20);
		inherit.takeDamage(1000);
		inherit.takeDamage(1000);
		inherit.takeDamage(1000);
		inherit.attack("momo");
		inherit.beRepaired(20);
		std::cout << "\n";
	}
	std::cout << std::endl << std::string(70, '-') << std::endl << std::endl;
	{
		DiamondTrap inherit(GREEN "inherit" RESET);

		inherit.wohAml();
	}
	std::cout << std::endl << std::string(70, '-') << std::endl << std::endl;

	return 0;
}
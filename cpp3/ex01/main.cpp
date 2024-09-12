/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:16:24 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/12 13:38:53 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << std::endl << std::string(70, '-') << std::endl << std::endl;
	{
		ScavTrap inherit(GREEN "inherit" RESET);
		ClapTrap playeur1(GREEN "Hero" RESET);

		std::cout << RED "\nTEST ENERGY\n" RESET << std::endl;
		for (int i = 0; i <= 10; i++)
			playeur1.attack("bobo");
		for (int i = 0; i <= 50; i++)
			inherit.attack("momo");
		playeur1.beRepaired(2);
		inherit.beRepaired(2);
		std::cout << "\n";
	}

	std::cout << std::endl << std::string(70, '-') << std::endl << std::endl;

	{
		ScavTrap inherit(GREEN "inherit" RESET);
		ClapTrap playeur1(GREEN "Hero" RESET);

		std::cout << RED "\nTEST TAKE DAMAGE\n" RESET << std::endl;

		for (int i = 0; i < 4; i++)
			playeur1.takeDamage(2);
		for (int i = 0; i < 4; i++)
			inherit.takeDamage(20);
		for (int i = 0; i < 12; i++)
			playeur1.beRepaired(2);
		for (int i = 0; i < 51; i++)
			inherit.beRepaired(20);
		playeur1.takeDamage(15);
		playeur1.takeDamage(15);
		playeur1.takeDamage(15);
		inherit.takeDamage(500);
		inherit.takeDamage(500);
		inherit.takeDamage(500);
		playeur1.attack("bobo");
		playeur1.beRepaired(2);
		inherit.attack("momo");
		inherit.beRepaired(20);
		std::cout << "\n";
	}
	std::cout << std::endl << std::string(70, '-') << std::endl << std::endl;
	{
		ScavTrap inherit(GREEN "inherit" RESET);

		inherit.guardGate();
	}
	std::cout << std::endl << std::string(70, '-') << std::endl << std::endl;

	return 0;
}
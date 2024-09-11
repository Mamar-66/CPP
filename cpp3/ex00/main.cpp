/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:16:24 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/11 16:48:51 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << std::endl << std::string(70, '-') << std::endl << std::endl;
	{
		ClapTrap playeur1(GREEN "Hero" RESET);

		std::cout << RED "\nTEST ENERGY\n" RESET << std::endl;
		for (int i = 0; i <= 10; i++)
			playeur1.attack("bobo");
		playeur1.beRepaired(2);
		std::cout << "\n";
	}

	std::cout << std::endl << std::string(70, '-') << std::endl << std::endl;

	{
		ClapTrap playeur1(GREEN "Hero" RESET);

		std::cout << RED "\nTEST TAKE DAMAGE\n" RESET << std::endl;

		for (int i = 0; i < 4; i++)
			playeur1.takeDamage(2);
		for (int i = 0; i < 12; i++)
			playeur1.beRepaired(2);
		playeur1.takeDamage(15);
		playeur1.takeDamage(15);
		playeur1.takeDamage(15);
		playeur1.attack("bobo");
		playeur1.beRepaired(2);
		std::cout << "\n";
	}
	std::cout << std::endl << std::string(70, '-') << std::endl << std::endl;
	return 1;
}
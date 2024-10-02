/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:58:56 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/01 12:18:06 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main()
{
	int	nb_zombie = 50;
	Zombie *hord_zombie = zombieHorde(nb_zombie, ORANGE "zombie : " RESET);

	for (int i = 0; i < nb_zombie; i++)
		hord_zombie[i].annonce();

	delete[] hord_zombie;

	return (0);
}

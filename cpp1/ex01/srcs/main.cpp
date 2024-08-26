/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:58:56 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/26 07:02:07 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main()
{
	int	nb_zombie = 50;
	Zombie *hord_zombie = zombieHorde(nb_zombie, "zombie : ");

	for (int i = 0; i < nb_zombie; i++)
		hord_zombie[i].annonce();

	delete[] hord_zombie;

	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:27:48 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/26 06:58:40 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie				*return_horde = new Zombie[N];
	std::stringstream	number;

	for (int i = 0; i < N; i++)
	{
		number << i + 1;
		std::string nb = number.str();
		return_horde[i].set_Name(name + nb);
		number.str("");
	}

	return return_horde;
}

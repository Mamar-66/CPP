/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:28:21 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/24 12:51:52 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int	main()
{
	Zombie	zombie1("Zombie_stack");
	Zombie	*zombie2 = newZombie("Zombie_heap");
	zombie1.annonce();
	zombie2->annonce();
	randomChump("random");
	delete (zombie2);
	return (0);
}

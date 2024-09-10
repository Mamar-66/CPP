/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:16:24 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/10 17:16:04 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap playeur1("playeur1");
	ClapTrap playeur2;

	playeur1.attack("playeur1");
	playeur2.attack("") ;
	
	return 1;
}
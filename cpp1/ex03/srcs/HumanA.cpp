/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:27:07 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/01 13:06:09 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :
	_name(name),
	_weapon(weapon)
{
	this->_weapon = weapon.getType();
}

HumanA::~HumanA(void)
{
	std::cout << RED "destructor HumanA" RESET << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attacks with its : " << this->_weapon.getType() << std::endl;
}

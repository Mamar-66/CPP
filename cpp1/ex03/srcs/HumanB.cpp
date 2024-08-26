/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 14:15:33 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/26 15:07:16 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

HumanB::HumanB(std::string name) :
	_name(name),
	_weapon(NULL)
{
}

HumanB::~HumanB(void)
{
	//std::cout << RED "destructor HumanB" RESET << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::attack(void) const
{
	std::cout << this->_name << " attacks with its : ";

	if (_weapon)
		std::cout << this->_weapon->getType() << std::endl;
	else
		std::cout << "no weapon" << std::endl;
}

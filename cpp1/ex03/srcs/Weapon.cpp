/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:55:33 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/26 15:03:17 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

Weapon::Weapon(std::string weapontype) :
		_weaponType(weapontype)
{
}

Weapon::~Weapon()
{
	//std::cout << RED "destructor weapon" RESET << std::endl;
}

std::string	const &Weapon::getType(void)
{
	return this->_weaponType;
}

void	Weapon::setType(std::string weaponType)
{
	this->_weaponType = weaponType;
}

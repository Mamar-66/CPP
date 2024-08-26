/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 14:23:40 by omfelk            #+#    #+#             */
/*   Updated: 2024/08/25 14:58:21 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << RED " : was destroyed" RESET << std::endl;
}

void	Zombie::annonce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ" << std::endl;
}
void	Zombie::set_Name(std::string name)
{
	this->_name = name;
}

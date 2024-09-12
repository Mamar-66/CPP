/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 08:10:39 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/12 13:02:42 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : 
	ClapTrap()
{
	std::cout << RED "ScavTrap Constructor >> " RESET << _name << " << called" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::ScavTrap(std::string name) : 
	ClapTrap(name)
{
	std::cout << RED "SavTrap Constructor >> " RESET << name << " << called" << std::endl;
	this->_hit = 100;
	this->_energy = 50;
	this->_attack = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << RED "ScavTrap Destructor >> " RESET << this->_name << " << called" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
		std::cout << RED "ScavTrap " RESET << this->_name;
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_energy--;
		std::cout << " attacks " ORANGE << target << RESET " , caussing " ORANGE << this->_attack << RESET " points of damage ";
		std::cout << this->_name << " has " ORANGE << this->_energy << RESET " energy" << std::endl;
	}
	else
		std::cout << " for attack not enought energy points or dead" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << RED " ScavTrap is now in Gate keeper mode" RESET << std::endl;
}

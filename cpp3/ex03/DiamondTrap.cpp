/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 09:51:10 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/19 12:22:15 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) :
	ClapTrap(GREEN "default_clap_name" RESET), ScavTrap(), FragTrap(), _name(GREEN "Default" RESET)

{
	std::cout << RED "DiamondTrap Constructor >> " RESET << _name << " << called" << std::endl;
	_hit = FragTrap::_hit;
	_attack = FragTrap::_attack;
	this->ScavTrap::_energy = 50;
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + GREEN "_clap_name" RESET), ScavTrap(), FragTrap(), _name(name)

{
	std::cout << RED "DiamondTrap Constructor >> " RESET << _name << " << called" << std::endl;
	_hit = FragTrap::_hit;
	_attack = FragTrap::_attack;
	this->ScavTrap::_energy = 50;
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamondTrap) :
	ClapTrap(diamondTrap), ScavTrap(), FragTrap()
{
	std::cout << RED "DiamondTrap copy Constructor >> " RESET << _name << " << called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << RED "Diamond Destructor >> " RESET << this->_name << " << called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamondTrap)
{
	ClapTrap::operator=(diamondTrap);
	ScavTrap();
	FragTrap();
	return *this;
}

void	DiamondTrap::wohAml(void)
{
	std::cout << "My name is >> " << _name << " << and name clapTrap is >> " << this->ClapTrap::_name << " << " << std::endl;
}

void	DiamondTrap::attack(const std::string &string)
{
	this->ScavTrap::attack(string);
}
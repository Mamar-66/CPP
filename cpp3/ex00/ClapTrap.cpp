/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:39:33 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/11 16:46:40 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*----------------------------------------------------
				CONSTRUCTOR / DESTRUCTOR
----------------------------------------------------*/

ClapTrap::ClapTrap(void) :
	_name(GREEN "Default" RESET),
	_hit(10), _energy(10), _attack(0)
{
	std::cout << RED "Constructor >> " RESET << _name << " << called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hit(10), _energy(10), _attack(0)		
{
	std::cout << RED "Constructor >> " RESET << name << " << called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& claptrap):
	_name(claptrap._name),
	_hit(claptrap._hit), _energy(claptrap._energy), _attack(claptrap._attack)	
{
		std::cout << RED "Constructor copy >> " RESET GREEN << claptrap._name << " << called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << RED "Destructor >> " RESET 	<< this->_name << " << called" << std::endl;
}

/*----------------------------------------------------

----------------------------------------------------*/

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << this->_name;
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_energy--;
		std::cout << " attacks " ORANGE << target << RESET " , caussing " ORANGE << this->_attack << RESET " points of damage ";
		std::cout << this->_name << " has " ORANGE << this->_energy << RESET " energy" << std::endl;
	}
	else
		std::cout << " for attack not enought energy points or dead" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name;
	if (this->_energy > 0 && this->_hit > 0)
	{
		this->_hit += amount;
		this->_energy--;
		std::cout << " take " ORANGE << amount << RESET " hit points " << this->_name << " now have " ORANGE << this->_hit << RESET << std::endl;
	}
	else
		std::cout << " for repaired not enought energy points or dead" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name;
	if (this->_hit <= 0)
		std::cout << " is already dead" << std::endl;
	else if (amount >= (unsigned int)this->_hit)
	{
		std::cout << " have " ORANGE<< this->_hit <<RESET " pv, " << this->_name;
		std::cout << " take " ORANGE << amount << RESET " damage and dead" << std::endl;
		this->_hit = 0;
	}
	else
	{
		this->_hit -= amount;
		std::cout << " take " ORANGE << amount << RESET " damage ";
		std::cout << this->_name << " has " ORANGE << this->_hit << RESET " pv " << std::endl;

	}
}

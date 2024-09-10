/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:39:33 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/10 17:17:07 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*----------------------------------------------------
				CONSTRUCTOR / DESTRUCTOR
----------------------------------------------------*/

ClapTrap::ClapTrap(void) :
	_name("Default"),
	_hit(10), _energy(10), _attack(0)
{
	std::cout << "Constructor >> " GREEN "default" RESET << " << called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name),
	_hit(10), _energy(10), _attack(0)		
{
	std::cout << "Constructor >> " GREEN << name << RESET " << called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& claptrap):
	_name(claptrap._name),
	_hit(claptrap._hit), _energy(claptrap._energy), _attack(claptrap._attack)	
{
		std::cout << "Constructor copy >> " GREEN << claptrap._name << " << called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

/*----------------------------------------------------

----------------------------------------------------*/

void	ClapTrap::attack(const std::string& target)
{
	(void)target;
	std::cout << "void" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	(void)amount;
	std::cout << "void" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	(void)amount;
	std::cout << "void" << std::endl;
}

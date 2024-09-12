/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:12:04 by omfelk            #+#    #+#             */
/*   Updated: 2024/09/12 17:34:20 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) :
	ClapTrap()
{
	std::cout << RED "FragTrap Constructor >> " RESET << _name << " << called" << std::endl;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << RED "FragTrap Constructor >> " RESET << name << " << called" << std::endl;
	this->_name = name;
	this->_hit = 100;
	this->_energy = 100;
	this->_attack = 30;
}

FragTrap::FragTrap(const FragTrap& fragTrap) :
	ClapTrap(fragTrap)
{
	std::cout << RED "FlagTrap constructor copy >> " RESET GREEN << fragTrap._name << " << called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << RED "FragTrap Destructor >> " RESET << this->_name << " << called" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap &flagTrap)
{
	ClapTrap::operator=(flagTrap);
	return *this;
}

void		FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << RED " congratulations congratulations congratulations congratulations" RESET << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 09:44:06 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/14 12:02:23 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Character.hpp"

Character::Character() : _name("Default")
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	std::cout << ORANGE "Character Constructor >> " RED << _name << ORANGE " << called" RESET << std::endl;
}

Character::Character(const std::string name) : _name(name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = NULL;
	std::cout << ORANGE "Character Constructor >> " RED << _name << ORANGE " << called" RESET << std::endl;
}

Character::Character(const Character& character) : _name(character._name)
{
	for (int i = 0; i < 4; i++)
		this->_materia[i] = (character._materia[i]) ? character._materia[i]->clone() : NULL;
	std::cout << ORANGE "Copy Character Constructor >> " RED << _name << ORANGE " << called" RESET << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_materia[i] != NULL)
			delete this->_materia[i];
	}
	std::cout << ORANGE "Character Destructor >> " RED << _name << ORANGE " << called" RESET << std::endl;
}

Character& Character::operator=(const Character& character)
{
	if (this != &character)
	{
		this->~Character();
		this->_name = character._name;
		for (int i = 0; i < 4; i++)
			this->_materia[i] = (character._materia[i]) ? character._materia[i]->clone() : NULL;
	}
	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void Character::equip(AMateria* m)
{
	if (m)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->_materia[i])
			{
				this->_materia[i] = m;
				break;
			}
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_materia[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if ( (idx >= 0 && idx <= 3) && this->_materia[idx] )
		this->_materia[idx]->use(target);
}

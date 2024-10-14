/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 10:54:59 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/14 12:01:32 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		this->_materiaTab[i] = NULL;
	std::cout << ORANGE "MateriaSource Constructor >> " RED << "Default" << ORANGE " << called" RESET << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& materiasource)
{
	for (int i = 0; i < 4; i++)
		this->_materiaTab[i] = (materiasource._materiaTab[i]) ? materiasource._materiaTab[i]->clone() : NULL;
	std::cout << ORANGE "Copy MateriaSource Constructor >> " RED << "Default" << ORANGE " << called" RESET << std::endl;
}

MateriaSource::~MateriaSource()
{
	std::cout << ORANGE "MateriaSource Destructor >> " RED << "Default" << ORANGE " << called" RESET << std::endl;
	for (int i = 0; i < 4; i++)
	{
		if (this->_materiaTab[i])
			delete this->_materiaTab[i];
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& materiasource)
{
	if (this != &materiasource)
	{
		this->~MateriaSource();
		for (int i = 0; i < 4; i++)
			this->_materiaTab[i] = (materiasource._materiaTab[i]) ? materiasource._materiaTab[i]->clone() : NULL;
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria* ptr)
{
	if (ptr)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!this->_materiaTab[i])
			{
				this->_materiaTab[i] = ptr;
				break;
			}
		}
	}
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	if (&type)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_materiaTab[i] && this->_materiaTab[i]->getType() == type)
				return this->_materiaTab[i]->clone();
		}
	}
	return NULL;
}
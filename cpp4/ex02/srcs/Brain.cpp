/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 10:04:19 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/05 13:15:11 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	const std::string think[] =
	{
		"Is it time to eat yet?",
		"I wonder what that smell is.",
		"I need a nap right now.",
		"Where's my human? I need attention!",
		"Squirrel! I must chase it!"
	};
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = think[rand () % 5];
	std::cout << RED "BRAIN defaul constructor called" RESET << std::endl;
}

Brain::Brain(const Brain& brain)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = brain._ideas[i];
	std::cout << GREEN "BRAIN copy_constructor called" RESET << std::endl;
}

Brain::~Brain(void)
{
	std::cout << GREEN "BRAIN destructor Brain called" RESET << std::endl;
}

Brain	&Brain::operator=(const Brain& brain)
{
	if (this != &brain)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = brain._ideas[i];
	}
	return *this;
}

const std::string&	Brain::getIdea(const int index) const
{
	return this->_ideas[index];
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:02:26 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/24 12:08:48 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Serializer.hpp"

Serializer::Serializer()
{
	std::cout << ORANGE "Serializer Constructeur called" RESET << std::endl;
}

Serializer::Serializer(const Serializer& other)
{
	(void)other;
	std::cout << ORANGE "Copy Serializer Constructeur called" RESET  << std::endl;
}

Serializer::~Serializer()
{
	std::cout << ORANGE "Destructor Serializer called" RESET << std::endl;
}

Serializer& Serializer::operator=(const Serializer& other)
{
	(void)other;

	return *this;
}

uintptr_t	Serializer::serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data*	Serializer::deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}
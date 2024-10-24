/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 12:33:28 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/24 12:39:23 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
	std::cout << "Constructor Base called" << std::endl;
}

Base::~Base()
{
	std::cout << "Destructor Base called" << std::endl;
}
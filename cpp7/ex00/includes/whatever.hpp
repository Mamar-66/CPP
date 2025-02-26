/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:26:52 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/24 20:52:03 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
	#define WHATEVER_HPP

	#include <iostream>


	template<typename T>
	void	swap(T& a, T& b)
	{
		T	tmp;
	
		tmp = a;
		a = b;
		b = tmp;
	}

	template<typename T>
	T	min(T& a, T&b)
	{
		return (a <= b) ? a : b;
	}

	template<typename T>
	T	max(T& a, T&b)
	{
		return (a >= b) ? a : b;
	}
	// template<typename T>
	// void	swap(T& a, T& b);

	// template<typename T>
	// T	min(T& a, T& b);

	// template<typename T>
	// T	max(T& a, T& b);

#endif
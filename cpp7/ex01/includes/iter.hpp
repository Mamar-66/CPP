/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:12:56 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/24 22:14:44 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
	#define ITER_HPP

	#include <iostream>

	template<typename T>
	void	iter(T* array, size_t length, void (*f)(const T&))
	{
		for (size_t i = 0; i < length; i++)
			(*f)(array[i]);
	}

#endif

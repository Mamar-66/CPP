/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:27:56 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/31 11:16:50 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_TPP
	#define EASYFIND_TPP

	#include "../includes/easyfind.hpp"

	template<typename T>
	int	easyfind(const T& array, int nb)
	{
		typename 	T::const_iterator it = array.begin();
		typename 	T::const_iterator ite = array.end();

		while (it != ite)
		{
			if (*it == nb)
				return *it;
			it++;
		}

		throw NOOCCURENCESFOUND();
	}

	const char * NOOCCURENCESFOUND::what() const throw()
	{
		return ("NO OCCURENCES FOUND");
	}

#endif
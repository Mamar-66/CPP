/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 15:26:52 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/31 11:19:57 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
	#define EASYFIND_HPP

	#include <iostream>
	#include <list>
	#include <cstdlib>

	template<typename T>
	int	easyfind(const T& array, int nb);

	class NOOCCURENCESFOUND : public std::exception
	{
		public :
			const char *what() const throw();
	};


	#include "../srcs/easyfind.tpp"
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:51:25 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/25 00:26:56 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
	#define ARRAY_HPP

	#include <iostream>
	#include <string>

	template<typename T>
	class	Array
	{
		private :
			T *_tab;
		public :
			Array();
			Array(const Array& other);
			~Array();

			Array& operator=(const Array& other);
			
	};

#endif

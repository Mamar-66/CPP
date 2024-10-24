/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:01:29 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/24 12:08:12 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
	#define SERIALIZER_HPP

	#include <iostream>
	#include <string>
	#include <stdint.h>
	#include "Data.hpp"

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class Data;

	class	Serializer
	{
		private :
			Serializer();
			Serializer(const Serializer& other);
			~Serializer();

			Serializer&	operator=(const Serializer& other);

		public :
			static uintptr_t 	serialize(Data* ptr);

			static Data* 		deserialize(uintptr_t raw);	
	};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 10:49:25 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/23 20:13:36 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
	#define SCALARCONVERTER_HPP

	#include <string>
	#include <iomanip>
	#include <float.h>
	#include <cstdlib>
	#include <limits.h>
	#include <climits>
	#include <iostream>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class	ScalarConverter
	{
		private :
			ScalarConverter();
			ScalarConverter(const ScalarConverter& other);
			~ScalarConverter();

			ScalarConverter& operator=(const ScalarConverter& other);

		public :

			static void	convert(std::string literal);

	};

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 16:42:21 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/07 16:26:48 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE
	#define BITCOINEXCHANGE

	#include <iostream>
	#include <fstream>
	#include <string>
	#include <cstdlib>
	#include <map>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class	BitcoinExchange
	{
		private :
			std::map<std::string, float>	_data;
			void							_add_data();

		public :
			BitcoinExchange();
			BitcoinExchange(const BitcoinExchange& other);
			~BitcoinExchange();

			BitcoinExchange& operator=(const BitcoinExchange& other);

			std::ifstream					file_input;
			float							culcul(std::string& val, std::string& date);
			void							changeVal();
	};


#endif
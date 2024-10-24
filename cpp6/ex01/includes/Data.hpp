/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 10:40:33 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/24 12:14:44 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
	#define DATA_HPP

	#include <string>
	#include <iostream>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class	Data
	{
		private :
			std::string	_name;
		public :
			Data();
			Data(const Data& other);
			~Data();

			Data&	operator=(const Data& other);

			std::string		getName();
	};

	std::ostream&	operator<<(std::ostream& o, Data& other); 

#endif
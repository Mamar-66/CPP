/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 23:51:25 by omfelk            #+#    #+#             */
/*   Updated: 2024/10/28 11:33:14 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
	#define ARRAY_HPP

	#include <iostream>
	#include <string>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	template<typename T>
	class	Array
	{
		private :
			T		*_tab;
			int		_size;

		public :
			Array();
			Array(const unsigned int& size);
			Array(const Array& other);
			~Array();

			Array&	operator=(const Array& other);
			T		operator[](int n) const;
			T&		operator[](int n);

			int size() const;

			class OVERFLOWTAB : public std::exception
			{
				public :
					const char* what() const throw();
			};
	};

	#include "../srcs/Array.tpp"

#endif

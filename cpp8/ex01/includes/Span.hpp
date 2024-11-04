/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:02:45 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/04 13:13:41 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
	#define SPAN_HPP

	#include <iostream>
	#include <algorithm>
	#include <vector>
	#include <cstdlib>
	#include <climits>

	#define RED     "\033[31m"
	#define ORANGE  "\033[38;5;208m"
	#define GREEN   "\033[32m"
	#define BLUE    "\033[34m"
	#define RESET   "\033[0m"
	#define BOLD    "\033[1m"
	#define UNDERLINE "\033[4m"

	class Span
	{
		private :
			unsigned int					_maxNb;
			unsigned int					_storyteller;
			std::vector<unsigned int>		_array;

		public :
			Span();
			Span(const unsigned int maxnb);
			Span(const Span &other);
			~Span();

			Span&	operator=(const Span &other);

			void				addNumber(unsigned int number);
			unsigned int		shortestSpan();
			unsigned int		longestSpan();
			void				addNb(const std::vector<unsigned int>::iterator& begin, const std::vector<unsigned int>::iterator& end);

			class ExceptionMaxNb : public std::exception
			{
				public :
					const char *what() const throw();
			};
			class ExceptionNoNb : public std::exception
			{
				public :
					const char *what() const throw();
			};
			class ExceptionOnNb : public std::exception
			{
				public :
					const char *what() const throw();
			};
	};

#endif
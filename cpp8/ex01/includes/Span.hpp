/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omfelk <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 16:02:45 by omfelk            #+#    #+#             */
/*   Updated: 2024/11/02 17:00:47 by omfelk           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
	#define SPAN_HPP

	#include <iostream>

	class Span
	{
		public :
			Span();
			Span(unsigned int number);
			Span(const Span &other);
			~Span();

			Span&	operator=(const Span &other);

			void addNumber(int number);

	};

#endif